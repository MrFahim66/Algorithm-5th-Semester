from math import *
P1 = input().split()
P2 = input().split()

x1,y1 = P1
x2,y2 = P2

x1 = float(x1)
y1 = float(y1)
x2 = float(x2)
y2 = float(y2)

Distance = sqrt(pow((x2 - x1),2)+pow((y2 - y1),2))

print("%0.4f"%Distance)