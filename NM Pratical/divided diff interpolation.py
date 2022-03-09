#divided difference interpolation
import numpy as np
xp=0.7
x=[0,0.4,0.9,1.2,1.5]
y=[1,1.8556,2.5868,2.1786,0.4167]
n=len(x)
A=np.zeros([n,n])
A[:,0]=np.transpose(y)
sum=y[0]
prod=1
for j in range(1,n):
    for i in range(n-j):
        A[i][j]=(A[i+1][j-1]-A[i][j-1])/(x[i+j]-x[i])
    prod=prod*(xp-x[j-1])
    sum=sum+prod*A[0][j]
print("{:0.4f}".format(sum))
    
    