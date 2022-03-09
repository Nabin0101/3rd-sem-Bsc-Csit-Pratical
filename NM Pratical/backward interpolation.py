#newton's backward interpolation
import numpy as np
x=[1,2,3,4]
y=[0,0.6931,1.0986,1.3863]
xp=3.5
n=len(x)
A=np.zeros([n,n])
A[:,0]=np.transpose(y)
sum=y[n-1]
prod=1
f=1
h=(x[1]-x[0])
p=(xp-x[n-1])/h
for j in range(1,n):
    for i in range(n-j):
        A[i][j]=(A[i+1][j-1]-A[i][j-1])  
    prod=prod*(p+(j-1))/(f*j)
    sum=sum+prod*A[i][j]
print("{:0.4f}".format(sum))    