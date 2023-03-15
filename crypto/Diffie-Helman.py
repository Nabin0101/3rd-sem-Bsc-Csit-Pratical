q=int(input('Enter prime number (q): '))
a=int(input('Enter primitive root of q:'))
XA=int(input('Alice secret kry(XA):'))
XB=int(input('Bob secret key(XB):'))

YA=pow(a,XA,q)
YB=pow(a,XB,q)

KA=pow(YB,XA,q)

KB=pow(YA,XB,q)
print('secret key for the Alice is: %d'%(KA))
print('secret key for the Bob is: %d'%(KB))