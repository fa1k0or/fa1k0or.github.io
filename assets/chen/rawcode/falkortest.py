import matplotlib.patches as mpatches
import matplotlib.pyplot as plt
import numpy as np
import math

R = [1.8,1.4,1.2,1.1]
L = [1,2,3,4]

def f1(x):
    return 0.8* (0.5)** (x-1) + 1

fR = []
fL = []
for i in range(100,400):
    fL.append( i / 100)
    fR.append( f1( i/100 ) )

fig, ax = plt.subplots()

ax.plot(L,R, color = "deepskyblue")
ax.plot(fL,fR, color = 'black',linestyle = '--')

ax.set(xlabel='L',
       ylabel='ratio (fH1/fH2)',
       title ='Ratio from L')

fig.savefig("yeah.png")
plt.show()
