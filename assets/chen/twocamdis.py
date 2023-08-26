"""
Name: TwoCamDis 
Author: Jayden Chen
Purpose: Get the distance of a person from Two Cameras

input: 
    hand_landmarks from mediapipe hands * 2

output: 
    distance in meters

"""

import math
import mediapipe as mp
import cv2
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

#initialize mediapip hands 
mp_drawing = mp.solutions.drawing_utils
mp_drawing_styles = mp.solutions.drawing_styles
mp_hands = mp.solutions.hands

"""
Func: disformula
Author: Jayden Chen
Purpose: gets the distance between two points

input: 
    (x,y) * 2
    
output:
    integer

remarks:

"""
def disformula(a,b): #gets distance between two points

    return math.sqrt((a[0]-b[0])**2 + (a[1]-b[1])**2 )

"""
Func: calcRegression
Author: Jayden Chen
Purpose: based on the data given, change the values of a,b,c in L*(a/(P-b) - c)

input: data.csv
    
output: 

remarks:
    need to learn this
"""

#distance = L * (a / (P-b) -c)

def loss_function(a,b,c,L,points):
    total_error = 0

    for i in range(len(points)):
        x = points.iloc[i].x
        y = points.iloc[i].y
        total_error += (y - (L*a/(x-b)-c)**2)

    return total_error/float(len(points))

def gradient_descent(a_now, b_now,c_now, L, points, learningrate):
    a_gradinet = 0
    b_gradient = 0
    c_gradient = 0
    N= len(points)#number of training examples

    for i in range(N):
        x = points.iloc[i].x
        y = points.iloc[i].y

        a_gradinet += -(2/N) * (y - (L*a_now/(x-b_now)-c_now)) / (x-b_now)
        b_gradinet += -(2/N) * a_now / ( (y - (L*a_now/(x-b_now)-c_now)) - b_now )
        c_gradient += -(2/N) * (y - (L*a_now/(x-b_now)-c_now))

    a = a_now - a_gradinet * learningrate
    b = b_now - b_gradient * learningrate
    c = c_now - c_gradient * learningrate

    return a,b,c

a = 0.8
b = 0
c = 1 
L = 1
epochs = 1000

def calcRegression(R):

    plotRange = (20,
                 80
                )
    data = pd.read_csv('data.csv')

    for i in range(epochs):
        a,b,c = gradient_descent(a,b,c,L,data,0.001)

    print(a,b,c)

    plt.scatter(data.x,data.y, color = 'black')
    plt.plot(list(range(plotRange[0],plotRange[1])),[L*a/(x-b)-c for x in range(plotRange[0],plotRange[1])],color = 'blue')

"""
Func: calcDis 
Author: Jayden Chen
Purpose: calculates the distance based on the equation: P = 1 + 1/(x+1)

input: P (the ratio of P1 and P2)
    
output: distance in meters


remarks:

"""
def calcDis(P):
    #P = 1 + 1/(x + 1)
    #P - 1 = 1/(x + 1)
    #1/(P - 1) = (x + 1)/1
    #x = 1 / (P-1) -1

    #this is the distance between the two cameras in meters

    return round(L*(a/(P-b) + c),2) #the a, b, c values are calculated by calcRegression

"""
Func: cleanSingleData
Author: Jayden Chen
Purpose: formats the hand landmark points into distance

input: hand_landmarks, width, height
    
output: P1 or P2

remarks:
    
"""
def cleanSingleData(hand_landmarks,width,height):
            
    return disformula(((hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].x*width,
                        hand_landmarks.landmark[mp_hands.HandLandmark.WRIST].y*height),        
                       (hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_TIP].x*width,
                        hand_landmarks.landmark[mp_hands.HandLandmark.MIDDLE_FINGER_TIP].y*height))) 

"""
Func: cleanCoupledData
Author: Jayden Chen
Purpose: gets the P value

input: P1, P2
    
output: P

remarks:
    
"""
def cleanCoupledData(a,b):

    return b/a

"""
Func: twocamdis
Author: Jayden Chen
Purpose: returns the distance as fast as possible

input: P1, P2
    
output: distance in meters

remarks:
    
"""
def twocamdis(P1,P2):
    return calcDis(cleanCoupledData(P1,P2))

"""
Func: CompleteTwocamdis
Author: Jayden Chen
Purpose: returns the distance from the less-processed value given

input: hand_landmarks * 2, width, height
    
output: distance in meters

remarks: will not be used in run.py, but useful for reference
    
"""
def CompleteTwocamdis(hand_landmarks1,hand_landmarks2,width,height):

    P1 = cleanSingleData(hand_landmarks1,width,height)
    P2 = cleanSingleData(hand_landmarks2,width,height)

    P = cleanCoupledData(P1,P2)

    dis = calcDis(P) 

    return dis

# sample
def main():

    CAM1 = cv2.VideoCapture(0)
    CAM1.set(cv2.CAP_PROP_FOURCC,cv2.VideoWriter_fourcc('M','J','P','G'))
    CAM2 = cv2.VideoCapture(2)
    CAM2.set(cv2.CAP_PROP_FOURCC,cv2.VideoWriter_fourcc('M','J','P','G'))
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

                    if cv2.waitKey(100) == 27:
                        break
    CAM1.release()
    CAM2.release()
    cv2.destroyAllWindows

if __name__ == '__init__':
    main()