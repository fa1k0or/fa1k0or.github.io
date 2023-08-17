import twocamdis
import cogni

import math
import mediapipe as mp
import cv2
import numpy as np

#initialize mediapip hands 
mp_drawing = mp.solutions.drawing_utils
mp_drawing_styles = mp.solutions.drawing_styles
mp_hands = mp.solutions.hands

#initialize visual
def cognition():
    cogni.main()

def visualizeDis(distance):

    if distance != 'na':
    
        img=cv2.imread('canvas.jpg')
        x = 140 + 120*int(distance)
        cv2.circle(img,(425,x),20,(255,0,255))
        cv2.imshow('canvas',img)
        cv2.waitKey(50)

def cameraTest():
    for i in range(100):
        CAM1 = cv2.VideoCapture(i)

"""


"""
def run():

    CAM1 = cv2.VideoCapture(0)
    CAM1.set(cv2.CAP_PROP_FOURCC,cv2.VideoWriter_fourcc('M','J','P','G'))
    CAM2 = cv2.VideoCapture(2)
    CAM2.set(cv2.CAP_PROP_FOURCC,cv2.VideoWriter_fourcc('M','J','P','G'))
    print("Camera Found!")  

    frameWidth = int(CAM1.get(cv2.CAP_PROP_FRAME_WIDTH))
    frameHeight = int(CAM1.get(cv2.CAP_PROP_FRAME_HEIGHT))

    #wait a while
    cv2.waitKey(1000)
 
    if CAM1.isOpened():
        print("Camera 1 Open!")
        if CAM2.isOpened():
            print("Cameras Open!")

            with mp_hands.Hands(
                model_complexity=0,
                min_detection_confidence=0.5,
                min_tracking_confidence=0.5) as hands:
                
                print("Mediapipe Running!")

                while True:

                    #get frame and success
                    read_code1, frame1 = CAM1.read()
                    read_code2, frame2 = CAM2.read()

                    if read_code1 and read_code2:

                    # To improve performance, mark frames as not writeable to pass by reference
                        frame1.flags.writeable = False
                        frame1 = cv2.cvtColor(frame1,cv2.COLOR_BGR2RGB)
                        results1 = hands.process(frame1)
                        frame2.flags.writeable = False
                        frame2 = cv2.cvtColor(frame2,cv2.COLOR_BGR2RGB)
                        results2 = hands.process(frame2)

                        if results1.multi_hand_landmarks and results2.multi_hand_landmarks:

                            print('hand is found')
                    
                            for hand_landmarks1 in results1.multi_hand_landmarks:
                                for hand_landmarks2 in results2.multi_hand_landmarks:
                                    P1 = cogni.cogni(hand_landmarks1,frameWidth,frameHeight)
                                    P2 = cogni.cogni(hand_landmarks2,frameWidth,frameHeight)
                                    print(P1,P2)

                                    distance = 'na'
                                    if P1[1] and P2[1]:
                                    #if P1[0] and P2[0]:
                                        #distance = twocamdis.twocamdis(P1,P2)
                                        distance = twocamdis.twocamdis(P1[0],P2[0])
                                    print("the current distance is ", distance,'m \n')
                                    print(' ')
                                    visualizeDis(distance)
                        else:
                            print('hand not found')

                        frame1.flags.writeable = True
                        frame1 = cv2.cvtColor(frame1,cv2.COLOR_RGB2BGR)

                        if results1.multi_hand_landmarks:
                            for hand_landmarks in results1.multi_hand_landmarks:
                                mp_drawing.draw_landmarks(
                                frame1,
                                hand_landmarks,
                                mp_hands.HAND_CONNECTIONS,
                                mp_drawing_styles.get_default_hand_landmarks_style(),
                                mp_drawing_styles.get_default_hand_connections_style())
                
                        #cv2.imshow("screen0", frame0) #show frame
                        cv2.imshow("screen1", frame1)

                        frame2.flags.writeable = True
                        frame2 = cv2.cvtColor(frame2,cv2.COLOR_RGB2BGR)

                        if results2.multi_hand_landmarks:
                            for hand_landmarks in results2.multi_hand_landmarks:
                                mp_drawing.draw_landmarks(
                                frame2,
                                hand_landmarks,
                                mp_hands.HAND_CONNECTIONS,
                                mp_drawing_styles.get_default_hand_landmarks_style(),
                                mp_drawing_styles.get_default_hand_connections_style())
                
                        #cv2.imshow("screen0", frame0) #show frame
                        cv2.imshow("screen2", frame2)

                    else: 
                        print('frame not found')

                    if cv2.waitKey(100) == 27:
                        break
    CAM1.release()
    CAM2.release()
    cv2.destroyAllWindows


if __name__ == '__main__':
    x = input('insert func')
    if 'run' in x:
        print('running run()')
        run()
    elif 'cognition' in x:
        print('running cognition')
        cognition()
    elif 'cameraTest' in x:
        print('running cameraTest')
        cameraTest()
    else:
        print('do that again plz')