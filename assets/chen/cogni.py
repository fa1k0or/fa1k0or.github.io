"""
Name: Cognition
Author: Jayden Chen
Purpose: Determines if Hand Gesture is valid

input: 
    hand_landmarks from mediapipe hands

output: 
    Boolean
    WristToMiddle

remarks:

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

def angleformula(A,B,C): #gets the angle of a point 

    return math.acos((disformula(A,C)**2+disformula(A,B)**2-disformula(B,C)**2)/(2*disformula(A,C)*disformula(A,B)))

def isHand():                                                                                                                                                                                                                                                                                                                                              
    print('find hand')
    return False

"""
Func: CleanDisData
Author: Jayden Chen
Purpose: Translate handmarks into angle and distance data for cognition

input: 
    hand_landmarks
    
output:
    WristToThumb,WrsitToIndex,WristToMiddle,WristToRing,WristToPinky,ThumbCmc,ThumbMcp,ThumbIp,IndexPip,IndexDip,MiddlePip,MiddleDip,RingPip,RingDip,PinkyPip,PinkyDip in a list

"""
def cleanDisData(hand_landmarks):

    #format is [WristToThumb,WrsitToIndex,WristToMiddle,WristToRing,WristToPinky][ThumbCmc,ThumbMcp,ThumbIp,IndexPip,IndexDip,MiddlePip,MiddleDip,RingPip,RingDip,PinkyPip,PinkyDip]
    return [

        #Distance - This gets distance from tips to wrist - for general direction of hand and P1, P2 for twocamdis
         #WristToThumb
        [round(disformula((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x,             hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y),
                          (hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_TIP].x,         hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_TIP].y)),2),
         #WristToIndex
         round(disformula((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x,             hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y),
                          (hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].x,  hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].y)),2),
         #WristToMiddle
         round(disformula((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x,             hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y),
                          (hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_TIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_TIP].y)),2),
         #WristToRing
         round(disformula((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x,             hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y),
                          (hand_landmarks.landmark[mp_hands.HandLandmark.RING_FINGER_TIP].x,   hand_landmarks.landmark[mp_hands.HandLandmark.RING_FINGER_TIP].y)),2),
         #WristToPinky
         round(disformula((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x,             hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y),
                          (hand_landmarks.landmark[mp_hands.HandLandmark.PINKY_TIP].x,         hand_landmarks.landmark[mp_hands.HandLandmark.PINKY_TIP].y)),2)],

        #Angle - This will give the angles of each finger segment - for hand gestures
         #ThumbCmc
        [round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_CMC].x,         hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_CMC].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_MCP].x,         hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_MCP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x,             hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y)),2),
         #ThumbMcp
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_MCP].x,         hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_MCP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_IP].x,          hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_IP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_CMC].x,         hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_CMC].y)),2),
         #ThumbIp
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_IP].x,          hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_IP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_TIP].x,         hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_TIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_MCP].x,         hand_landmarks.landmark[mp_hands.HandLandmark.THUMB_MCP].y)),2),
         #IndexPip
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_PIP].x,  hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_PIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_DIP].x,  hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_DIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_MCP].x,  hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_MCP].y)),2),
         #IndexDip
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_DIP].x,  hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_DIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].x,  hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_PIP].x,  hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_PIP].y)),2),
         #MiddlePip
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_PIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_PIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_DIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_DIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_MCP].x, hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_MCP].y)),2),
         #MiddleDip
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_DIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_DIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_TIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_TIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_PIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_PIP].y)),2),
         #RingPip
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x, hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x, hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y)),2),
         #RingDip
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x, hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x, hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y)),2),
         #PinkyPip
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x, hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].y),
                            (hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x, hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y)),2),
         #PinkyDip
         round(angleformula((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x, hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y),
                      (hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].x, hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP].y),
                      (hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x, hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y)),2)
        ]]

def cogni(hand_landmarks):
    print('WA HO I"M COGNIGING YOU ')

if __name__ == '__main__':
    isHand()
