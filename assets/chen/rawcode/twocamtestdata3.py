"""
Jayden Chen 5/27/2023 Python3.9

This a data analysis on the cam dis equation and an attempt to solve it
"""

import matplotlib.patches as mpatches
import matplotlib.pyplot as plt
import numpy as np 

#distance increments
t1 = [31,62,93,124,155,186]

l1 = [30.23,60.87,93.12,120.31,150.1,180.04]

l2 = [47.59,77.57,108.92,136.92,162.66,196.12]

l3 = [34.98,64.41,91.87,92.74,101.14,150.05]

l4 = [46.66,92.17,134.7,183.53,227.86,261.88]



def reverse(x):
    return 5675//x

def f1(x): #peicewise function
    #only for 17 cm

    if x <= 62:
        return 335.05* 0.98**x #used calc r = -0.9972, r**2 = 0.9943
    else:
        return 179.64* 0.99**x #used calc r = -0.9615, r**2 = 0.9244

p1 = []
for i in range(6):
    p1.append(reverse(l1[i]))
p2 = []
for i in range(6):
    p2.append(reverse(l2[i]))
p3 = []
for i in range(6):
    p3.append(reverse(l3[i]))
p4 = []
for i in range(6):
    p4.append(reverse(l4[i]))

print(p1,p2,p3,p4)

t2 = []
predicted = []
for i in range(30,186):
    t2.append(i+1)
    predicted.append(f1(i+1))
    
fig, ax = plt.subplots() #create graph

#wrist to tip
ax.plot(t1,p1,color = 'maroon') #plot real length for camera 1

#ax.plot(t2,p2,color = 'darkorange')

#thumb
ax.plot(t1,p3,color = 'deepskyblue')

#ax.plot(t3,p4,color = 'blueviolet')

#fictional
ax.plot(t2,predicted, color = 'black', linestyle = '--')

ax.set(xlabel='Distance (cm)',
       ylabel='Pixel (480p)',
       title ='Relation Between Distance and Algorithm')
ax.grid() #define x y values, title and grid

fig.savefig("graph6.png")
plt.show()
