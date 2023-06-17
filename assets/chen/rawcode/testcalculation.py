import serial
import math

ser1 = serial.Serial("COM7",timeout = 1)
ser2 = serial.Serial("COM9",timeout = 1)

#insert known values
d = int(100) #in cm
h = int(1) #in cm
alpha = int(200) #random number
beta = float(int(100*d/h)/100) #h*beta = d

def pythagorean(a,b,c):
    if c = 0:
        output = math.sqrt(a**2 + b**2)
    elif b = 0:
        output = math.sqrt(c**2 - a**2)
    else:
        output = "none
    

while True:

    print("reading HL1")
    resp = ser1.readline()
    if resp != b"":
        hl1 = int(resp.decode().strip())
        l1 = hl1 / alpha
        print("HL1 is ",hl1," L1 is ",l1)
    else:
        print("no input for HL1")

    print("reading HL2")
    resp = ser2.readline()
    if resp != b"":
        hl2 = int(resp.decode().strip())
        l2 = hl2 / alpha
        print("HL2 is ",hl2," L2 is ",l2)
    else:
        print("no input for HL2")

    
        
    
    
