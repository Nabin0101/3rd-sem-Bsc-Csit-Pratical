#secant method
import numpy as np
def f(x):
    return x**3-x-1
a=1;b=2;tol=0.00005;err=1
print('a      b      x       error')
print('............................')
while err>tol:
    x=((a*f(b)-b*f(a)))/(f(b)-f(a))
    print('{:0.4f} {:0.4f} {:0.4f} {:0.4f}'.format(a,b,x,err))
    a=b;b=x
    err=np.abs(f(x))
print('the solution is {:0.4f}'.format(x)) 
   


