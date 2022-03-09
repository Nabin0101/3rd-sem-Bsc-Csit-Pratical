#simpson's method
import numpy as np
a=0;b=1;n=6;h=(b-a)/n;s1=0;s2=0
def f(x):
    return x**2+np.exp(x)-np.sin(x)
x=np.linspace(a,b,n+1)
y=f(x)
sim=((3*h)/8)*(y[0]+3*np.sum(y[1:3])+2*y[3]+3*np.sum(y[4:6])+y[n])
print("{:0.4f}".format(sim))    
    


