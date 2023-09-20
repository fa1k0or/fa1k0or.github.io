import math
import mediapipe as mp
import cv2
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from mediapipe.tasks import python
from mediapipe.tasks.python import vision
import os

#initialize mediapipe vision
base_options = python.BaseOptions(model_asset_path='efficientdet_lite0.tflite') #this is the model file, change file name if nesscary
options = vision.ObjectDetectorOptions(base_options=base_options,
                                       score_threshold=0.5) #score threshold shows 
detector = vision.ObjectDetector.create_from_options(options)

print('mediapipe running')
#2.04 1.93 1.92
#1.82 1.86
#1.65 1.65, 1.68, 1.5
#1.5 1.51 1.41
#1.35 1.39
coupled_files = [('m200011.png','m20001x2.png'),('m200021.png','m20002x2.png')]

def visualizeObject(image,detection_result) -> np.ndarray:
    category_name=""
    for detection in detection_result.detections:
        
        bbox = detection.bounding_box
        start_point = bbox.origin_x, bbox.origin_y
        end_point = bbox.origin_x + bbox.width, bbox.origin_y + bbox.height
        cv2.rectangle(image, start_point, end_point, (0,255,0), 3)
       
        category = detection.categories[0]
        category_name = category.category_name
        probability = round(category.score, 2)
        result_text = category_name + ' (' + str(probability) + ')'
        text_location = (0 + bbox.origin_x,0 + 0 + bbox.origin_y)
        cv2.putText(image, result_text, text_location, cv2.FONT_HERSHEY_PLAIN,1, (0,0,255), 2)

    return image,category_name

def ObjProperties(detection_result) -> np.ndarray:
    properties = []

    for detection in detection_result.detections:

        #get object box dimensions and origin
        bbox = detection.bounding_box
        width = bbox.width
        height = bbox.height
        origin = (bbox.origin_x, bbox.origin_y)

        #get object category name and accuracy probability
        category = detection.categories[0]
        item = category.category_name
        score = category.score

        properties.append({'item':item,'score':score ,'width':int(width),'height':int(height),'origin':origin})

    return properties

def cleanCoupledData(P1,P2):

    return P1/P2
    
def cleanSuitcaseData(raw):
    #print(raw)
    for i in raw:
        if i['item'] == 'suitcase':
            return int(i['width'])

print('starting')

data = []

if __name__ == '__main__':

    for file in coupled_files:

        imgA = cv2.imread((os.getcwd() + '/' + file[0]),-1)#read image A
        imgB = cv2.imread((os.getcwd() + '/' + file[1]),-1)#read image B

        #save image for formatting
        cv2.imwrite("image1.jpg",imgA)
        frame1 = mp.Image.create_from_file("image1.jpg")
        cv2.imwrite("image2.jpg",imgB)
        frame2 = mp.Image.create_from_file("image2.jpg")

        #get results
        results1 = detector.detect(frame1)
        results2 = detector.detect(frame2)

        raw1 = ObjProperties(results1)
        raw2 = ObjProperties(results2)

        print(raw1,len(raw1))
        print(raw2,len(raw2))

        if (len(raw1) != 0 and len(raw2) != 0):
            #if raw2['item'] == 'suitcase':
            P1 = cleanSuitcaseData(raw1)
            P2 = cleanSuitcaseData(raw2)
            print(P1,P2)
            P = cleanCoupledData(P1,P2)

            print(P)
            data.append(P)

        #show frames
        image1 = np.copy(frame1.numpy_view())
        annotated_image1,text1 = visualizeObject(image1, results1)
        rgb_annotated_image = cv2.cvtColor(annotated_image1, cv2.COLOR_BGR2RGB)
        cv2.imshow("image1",rgb_annotated_image)
        image2 = np.copy(frame2.numpy_view())
        annotated_image2,text2 = visualizeObject(image2, results2)
        rgb_annotated_image = cv2.cvtColor(annotated_image2, cv2.COLOR_BGR2RGB)
        cv2.imshow("image2",rgb_annotated_image)
    
        cv2.waitKey(1000)
print(data)
os.remove("image1.jpg")
os.remove('image2.jpg') 