#shooting method
import numpy as np
a=0;b=1;n=2;h=(b-a)/n
def f1(x,y,z):
    return z
def f2(x,y,z):
    return x**2-x*z-y
x=np.linspace(a,b,n+1)
y=np.zeros(n+1);z=np.zeros(n+1)
y[0]=0;yp=1
m0=0.5;z[0]=m0
for i in range(n):
    y[i+1]=y[i]+h*f1(x[i],y[i],z[i])
    z[i+1]=z[i]+h*f2(x[i],y[i],z[i])
    y0=y[-1]
m1=0.8;z[0]=m1    
for i in range(n):
    y[i+1]=y[i]+h*f1(x[i],y[i],z[i])
    z[i+1]=z[i]+h*f2(x[i],y[i],z[i])
    y1=y[-1]
m=(yp-y0)*(m1-m0)/(y1-y0)+m0;z[0]=m        
for i in range(n):
    y[i+1]=y[i]+h*f1(x[i],y[i],z[i])
    z[i+1]=z[i]+h*f2(x[i],y[i],z[i])
print(y)
print(y[n])        
        
        
                
    