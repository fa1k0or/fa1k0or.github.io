import matplotlib.patches as mpatches
import matplotlib.pyplot as plt
import numpy as np

#distance between the cameras is 18cm
t1 = [1,2,3,4,5,6]
l1 = [30.23,60.87,93.12,120.31,150.1,180.04]

t2 = [1,2,3,4,5,6]
l2 = [47.59,77.57,108.92,136.92,162.66,196.12]

t1_1 = [1,2,3,4,5,6]
l1_1 = [34.98,64.41,91.87,92.74,101.14,150.05]

t2_1 = [1,2,3,4,5,6]
l2_1 = [46.66,92.17,134.7,183.53,227.86,261.88]

def f1(x):
    return 30*x + 0
def f2(x):
    return 30*x + 18
def f3(x):
    return 23.2*x + 12
def f4(x):
    return 43*x+4


def f5(x):
    return 5675/x

x1 = []
y1 = []
for i in range(6):
    x1.append(i+1)
    y1.append(f1(i+1))
x2 = []
y2 = []
for i in range(6):
    x2.append(i+1)
    y2.append(f2(i+1))

x3 = []
y3 = []
for i in range(6):
    x3.append(i+1)
    y3.append(f3(i+1))
x4 = []
y4 = []
for i in range(6):
    x4.append(i+1)
    y4.append(f4(i+1))
    
fig, ax = plt.subplots() #create graph

maroon_patch = mpatches.Patch(color='maroon', label='Wrist to Tip Data from Camera 1')

darkorange_patch = mpatches.Patch(color='darkorange', label='Wrist to Tip Data from Camera 2')

deepskyblue_patch = mpatches.Patch(color='deepskyblue', label='Thumb Data from Camera 1')

blueviolet_patch = mpatches.Patch(color='blueviolet', label='Thumb Data from Camera 2')

#wrist to tip
ax.plot(t1,l1,color = 'maroon') #plot real length for camera 1
ax.plot(x1,y1,color = 'maroon',linestyle = '--') #plot fictional length for camera 1

ax.plot(t2,l2,color = 'darkorange')
ax.plot(x2,y2,color = 'darkorange',linestyle = '--')

#thumb
ax.plot(t1_1,l1_1,color = 'deepskyblue') #plot real length for camera 1
ax.plot(x3,y3,color = 'deepskyblue',linestyle = '--') #plot fictional length for camera 1

ax.plot(t2_1,l2_1,color = 'blueviolet')
ax.plot(x4,y4,color = 'blueviolet',linestyle = '--')

ax.set(xlabel='Distance (cm)',
       ylabel='Algorithm Output (cm)',
       title ='Relation Between Distance and Algorithm')
ax.grid() #define x y values, title and grid

fig.savefig("graph4.png")
plt.show()
