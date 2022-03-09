#jacobic method
import numpy as np
def f1(x,y,z,u):
    return 0.3+0.2*y+0.1*z+0.1*u
def f2(x,y,z,u):
    return 1.5+0.2*x+0.1*z+0.1*u
def f3(x,y,z,u):
    return 2.7+0.1*x+0.1*y+0.2*u
def f4(x,y,z,u):
    return -0.9+0.1*x+0.1*y+0.2*z
a=0;b=0;c=0;d=0;tol=0.00001;err=1
print('x      y       z       u')
print('...........................')
while err>tol:
    a1=f1(a,b,c,d)
    b1=f2(a,b,c,d)
    c1=f3(a,b,c,d)
    d1=f4(a,b,c,d)
    e1=np.abs(a1-a);e2=np.abs(b1-b)
    e3=np.abs(c1-c);e4=np.abs(d1-d)
    err=np.max([e1,e2,e3,e4])
    print('{:.4f} {:.4f} {:.4f} {:.4f}'.format(a,b,c,d))
    a=a1;b=b1;c=c1;d=d1
    
