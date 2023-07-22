import cv2
import twocamdis
import cogni

CAM1 = cv2.VideoCapture(0)
CAM2 = cv2.VideoCapture(2)
print("Camera Found!")

#wait a while
cv2.waitKey(1000)

fout = open('text.txt','w')

if CAM1.isOpened():
    if CAM2.isOpened():
        print("Camera Open!")

        