def gcd(p,q):
    while q!=0:
        p,q=q,p%q
    return p

x=int(input('Enter number for totient function:'))
n=[] #list of euler totient function
for y in range(1,x):
    if gcd(x,y)==1:
        n.append(y)
print('The value of Euler totient function ={}'.format(len(n)))
#print(n)

  