import matplotlib.pyplot as plt
import numpy as np

#distance between the cameras is 18cm
t1 = [1,2,3,4]
l1 = [32.7,61.3,93.41,120.08]

t2 = [1,2,3,4]
l2 = [49.7,77.4,110.26,136.07]

def f1(x):
    return 31*x + 0
def f2(x):
    return 31*x + 18
x1 = []
y1 = []
for i in range(4):
    x1.append(i+1)
    y1.append(f1(i+1))
x2 = []
y2 = []
for i in range(4):
    x2.append(i+1)
    y2.append(f2(i+1))
    

fig, ax = plt.subplots() #create graph

ax.plot(t1,l1,color = 'blue') #plot real length for camera 1
ax.plot(x1,y1,color = 'blue',linestyle = '--') #plot fictional length for camera 1

ax.plot(t2,l2,color = 'red')
ax.plot(x2,y2,color = 'red',linestyle = '--')

ax.set(xlabel='Distance Intervals (31cm per each)',
       ylabel='Algorithm Output (cm)',
       title ='Relation Between Distance and Algorithm')
ax.grid() #define x y values, title and grid

fig.savefig("graph2.png")
plt.show()
