import matplotlib.patches as mpatches
import matplotlib.pyplot as plt
import numpy as np
import math

P = [1.8,1.4,1.2,1.1,1.05]
d = []
L = 30

def f(x):
    return 0.8* (2)**(-x/L) + 1
def f1(x):
    return 2**(-x/L)
def f2(x):
    return 0.8*x + 1


for i in range(0,5):
    d.append( f1(30*i) )

fig, ax = plt.subplots()
ax.plot(d,P, color = 'black')

ax.set(xlabel='distance (cm)',
       ylabel='P (p1/p2)',
       title ='Falkor Equation')

fig.savefig("falkor.png")
plt.show()
