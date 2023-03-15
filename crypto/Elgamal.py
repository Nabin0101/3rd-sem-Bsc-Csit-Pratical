import random
q=353; a=3; XA=97
M1= input('Enter the message:')
M1=M1.upper()

#Defining modular inverse
def modularinverse(x,y):
    for i in range(1,y):
        if ((x*i)%y==1):
            return i
    return -1
cipher1=""
cipher2=""
result=""
for i in range(len(M1)):
    #alice computes for public
    M=ord(M1[i])
    YA=pow(a,XA,q)
    #bob's encryption
    k=random.randint(2,q-1)
    KB=pow(YA,k,q)
    C1=pow(a,k,q)
    cipher1+=chr(C1)
    C2=(KB*M)%q
    cipher2+=chr(C2)
    #Alice descryption
    KA=pow(C1,XA,q)
    KA_inv=modularinverse(KA,q)
    MA=(C2*KA_inv)%q
    result+=chr(MA)

print('The encrypted message pair:' +(cipher1+cipher2))
print('The descrypted message:' +result)
    
