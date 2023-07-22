"""
Name: TwoCamDis 
Author: Jayden Chen
Purpose: Get the distance of a person from Two Cameras

input: 
    hand_landmarks from mediapipe hands * 2

output: 
    distance


"""

import math
import mediapipe as mp
import cv2
import numpy as np

#initialize mediapip hands 
mp_drawing = mp.solutions.drawing_utils
mp_drawing_styles = mp.solutions.drawing_styles
mp_hands = mp.solutions.hands

def disformula(a,b): #gets distance between two points

    return math.sqrt((a[0]-b[0])**2 + (a[1]-b[1])**2 )

def calcRegression(R):

    print("Wa Ho I'm Calculating Regression")

a = 0.8
b = 0
c = 1 
def calcDis(P):
    #P = 1 + 1/(x + 1)
    #x = 1 / (P-1) -1

    L = 0.83

    return round(L*(a/(P-b) - c),2)

def cleanSingleData(hand_landmarks):
            
    return disformula([[hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x,
                             hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y,],        
                            [hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_TIP].x,
                             hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_TIP].y,]]) 

def cleanCoupledData(a,b):

    return a/b

def twocamdis(P1,P2):
    P = cleanCoupledData(P1,P2)
    return calcDis(P)

def CompleteTwocamdis(hand_landmarks1,hand_landmarks2):

    P1 = cleanSingleData(hand_landmarks1)
    P2 = cleanSingleData(hand_landmarks2)

    P = cleanCoupledData(P1,P2)

    dis = calcDis(P) 

    return dis

def main():

    CAM1 = cv2.VideoCapture(0)
    CAM2 = cv2.VideoCapture(2)
    print("Camera Found!")  

    #wait a while
    cv2.waitKey(1000)
 
    if CAM1.isOpened():
        if CAM2.isOpened():
            print("Camera Open!")

            with mp_hands.Hands(
                model_complexity=0,
                min_detection_confidence=0.5,
                min_tracking_confidence=0.5) as hands:
                
                print("Mediapipe Running!")

                while True:

                    #get frame and success
                    read_code1, frame1 = CAM1.read()
                    read_code2, frame2 = CAM2.read()

                    # To improve performance, mark frames as not writeable to pass by reference
                    frame1.flags.writeable = False
                    frame1 = cv2.cvtColor(frame1,cv2.COLOR_BGR2RGB)
                    results1 = hands.process(frame1)
                    frame2.flags.writeable = False
                    frame2 = cv2.cvtColor(frame2,cv2.COLOR_BGR2RGB)
                    results2 = hands.process(frame2)

                    if results1.multi_hand_landmarks:
                        if results2.multi_hand_landmarks:

                            print('')
                    
                            for hand_landmarks1 in results1.multi_hand_landmarks:
                                for hand_landmarks2 in results2.multi_hand_landmarks:
                                    distance = CompleteTwocamdis(hand_landmarks1,hand_landmarks2)

                    print("the current distance is ", distance,'m \n')

                    cv2.waitKey(10)

if __name__ == '__init__':
    main()