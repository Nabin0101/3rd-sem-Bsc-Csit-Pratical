#lagrange interpolation
import numpy as np
xp=301
x=[300,304,305,307]
y=[2.4771,2.4829,2.4843,2.4871]
n=len(x)
sum=0
for i in range(n):
    prod=1
    for j in range(n):
        if i!=j:
            prod=prod*(xp-x[j])/(x[i]-x[j])
    sum=sum+prod*y[i]
print('{:.4f}'.format(sum))       
        


