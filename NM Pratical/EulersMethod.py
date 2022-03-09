#Euler's Method
import numpy as np
a=0;b=1;n=5;h=(b-a)/n
def f(x,y):
    return((y**2-X**2)/(y**2+x**2))
x=np.linspace(a,b,n+1)
y=np.zeros([n+1])
y[0]=1
for i in range(n):
    y[i+1]=y[i]+h*f(x[i],y[i])
print()
