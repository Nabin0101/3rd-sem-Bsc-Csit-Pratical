import random
p=int(input('Enter frist prime number p: '))
q=int(input('Enter second prime number q: '))
n=p*q
Phi=(p-1)*(q-1)
#functionGCD
def gcd(p,q):
    while q!=0:
        p,q=q,p%q
    return p
#EulerToitentFunction
def Euler_func(x):
    if x==1:
        return 1
    else:
        Phi_list=[y for y in range(1,x) if gcd(x,y)==1]
        return Phi_list
#finding e relatively prime to Phi(n)
for i in range(2,Phi):
    e=random.choice(Euler_func(Phi))
    if gcd(e,Phi)==1:
        break
#Defining modular inverse
def modularinverse(x,y):
    for i in range(1,y):
        if ((x*i)%y==1):
            return i
    return -1
d=modularinverse(e,Phi)
print('public key pair= ({},{})'.format(n,e))
print('private key pair= ({},{})'.format(n,d))

M1 = input('Enter the message: ')
M1=M1.upper()
Cipher=""
result=""
for i in range(len(M1)):
    M=ord(M1[i])
    C=pow(M,e,n)
    Cipher+=chr(C)
    M_decrypted=pow(C,d,n)
    result+=chr(M_decrypted)
print('The encryptred message:'+Cipher)
print('The descrypted message: '+result)

    
