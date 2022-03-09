#fixed point iteration
import numpy as np
def f(x):
    return 1+1/2*np.sin(x)-x
def g(x):
    return 1+1/2*np.sin(x)
a=1;tol=0.00005;err=1;
print("a    g(x)    error")
while err>tol:
    x=g(a)
    print("{:0.4f}  {:0.4f}  {:0.4f}".format(a,g(a),err))
    err=np.abs(x)
    a=x
    
print("{:0.4f}".format(x))
 

