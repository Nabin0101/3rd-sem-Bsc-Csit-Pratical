#RungeKuttaMethod
import numpy as np
a=0;b=1;n=2;h=(b-a)/n
def f(x,y):
    return((y**2-x**2)/(y**2+x**2))
x=np.linspace(a,b,n+1)
y=np.zeros([n+1])
y[0]=1
for i in range(n):
    m1=f(x[i],y[i])
    m2=f(x[i]+h/2,y[i]+h/2*m1)
    m3=f(x[i]+h/2,y[i]+h/2*m2)
    m4=f(x[i]+h,y[i]+h*m3)
    y[i+1]=y[i]+h/6*(m1+2*m2+2*m3+m4)
print(y)
