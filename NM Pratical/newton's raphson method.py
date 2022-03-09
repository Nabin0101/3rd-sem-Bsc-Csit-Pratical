#newton's rapson's method
import numpy as np
def f(x):
    return x**2+4*x-9
def g(x):
    return 2*x+4
a=0;tol=0.00005;err=1
print('a      f(a)      g(a)    x    error')
print('.......................................')
while err>tol:
    x=a-(f(a)/g(a))
    print('{:0.4f} {:0.4f} {:0.4f} {:0.4f} {:0.4f}'.format(a,f(a),g(a),x,err))
    a=x
    err=np.abs(f(x))
print('the solution is {:0.4f}'.format(x))
    


