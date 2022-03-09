#simpson's method
import numpy as np
a=0;b=1;n=6;h=(b-a)/n;s1=0;s2=0
def f(x):
    return x**2+np.exp(x)-np.sin(x)
x=np.linspace(a,b,n+1)
y=f(x)
for i in range(1,n):
    if (i%2!=0):
        s1=s1+4*y[i]
    else:
        s2=s2+2*y[i]    
sim=h/3*(y[0]+s1+s2+y[n])
print("{:0.4f}".format(sim))    
    


