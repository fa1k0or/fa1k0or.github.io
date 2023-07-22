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


"""


"""
def run():

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

                    if read_code1 and read_code2:

                    # To improve performance, mark frames as not writeable to pass by reference
                        frame1.flags.writeable = False
                        frame1 = cv2.cvtColor(frame1,cv2.COLOR_BGR2RGB)
                        results1 = hands.process(frame1)
                        frame2.flags.writeable = False
                        frame2 = cv2.cvtColor(frame2,cv2.COLOR_BGR2RGB)
                        results2 = hands.process(frame2)

                        if results1.multi_hand_landmarks:
                            if results2.multi_hand_landmarks:

                                print('hand is found')
                    
                                for hand_landmarks1 in results1.multi_hand_landmarks:
                                    for hand_landmarks2 in results2.multi_hand_landmarks:
                                        #P1 = cogni(hand_landmarks1)
                                        #P2 = cogni(hand_landmarks2)
                                        #if P1[0] and P2[0]:
                                            #distance = twocamdis.twocamdis(P1,P2)
                                        distance = twocamdis.CompleteTwocamdis(hand_landmarks1,hand_landmarks2)
                                        print("the current distance is ", distance,'m \n')

                    print('frame not found')
                    cv2.waitKey(30)

if __name__ == '__main__':
    run()