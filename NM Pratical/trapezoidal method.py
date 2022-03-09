#tapezoidal method
import numpy as np
a=0;b=1;n=6;h=(b-a)/n;s1=0;s2=0
def f(x):
    return x**2+np.exp(x)-np.sin(x)
x=np.linspace(a,b,n+1)
y=f(x)
trap=h/2*(y[0]+2*np.sum(y[1:n])+y[n])
print("{:0.4f}".format(trap))
