#bisection method
import numpy as np
def f(x):
    return x**3-x-1
a=1;b=2;tol=0.00005;err=1
if f(a)*f(b)>0:
    print('invalid initial approximation')
else:
    print('a       b       x       error')
    print('..............................')
    while err>tol:
        x=(a+b)/2
        print('{:0.4f} {:0.4f} {:0.4f} {:0.4f}'.format(a,b,x,err))
        if f(x)*f(a)<0:
            b=x
        else:
            a=x
        err=np.abs(f(x))
print('the solution is {:0.4f}'.format(x))    
    
    