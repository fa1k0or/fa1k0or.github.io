import matplotlib.patches as mpatches
import matplotlib.pyplot as plt
import numpy as np
import math

P = []
d = []
L = 30

def f(x):
    return 1 + 1/(x+1)

for i in range(0,5):
    d.append( i )
    P.append( f(i) )

fig, ax = plt.subplots()
ax.plot(d,P, color = 'black')

ax.set(xlabel='distance (cm)',
       ylabel='P (p1/p2)',
       title ='Falkor Equation')

fig.savefig("falkor.png")
plt.show()
