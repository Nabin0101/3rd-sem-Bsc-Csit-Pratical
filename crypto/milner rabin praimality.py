n=int(input('enter number for miller Rabin praimality test:'))

if n <=3:
    print('Input must be greater than 3')
    
elif n%2==0:
    print('{} is composite number'.format(n))
    
s,d=0,n-1
while d%2==0:
    s=s+1
    d=d//2
    
a=2
x=pow(a,d,n)
if x==1 or x==n-1:
    print('{} is a prime number'.format(n))
for s in range(s-1):
    x=pow(x,2,1)
    if x==n-1:
        print('{} is a prime number'.format(n))
        break

    
    