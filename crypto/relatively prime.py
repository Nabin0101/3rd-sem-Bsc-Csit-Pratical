def gcd(p,q):
    while q!=0:
        p,q=q,p%q
    return p

x=int(input('Enter first number for relatively prime test:'))
y=int(input('Enter second number for relatively prime test:'))

if gcd(x,y)==1:
    print('{} and {} are relatively prime'.format(x,y))
else:
    print('{} and {} are not relatively prime'.format(x,y))