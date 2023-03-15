import numpy as np
n=2
k1="Part"
M1="Nala"

#Replace space with nothing
M1=M1.replace(" ", "")
M1=M1.upper()
k1=k1.upper()
m=len(M1)

#encryption#
# converting key alphabets into number list & reshaping into 2*2 matrix#

K=[]
for i in range(len(k1)):
    K.append(ord(k1[i])-65)
x=np.reshape(K,(n,n)).T

#converting message alphabets into number list and reshaping #
M=[]
for i in range(m):
    M.append(ord(M1[i])-65)
y=np.reshape(M,(n,m//n))

#multiplying key and message matrix and reshaping into
c=(np.dot(x,y))%26
c1=np.reshape(c+65,(1,m))
#converting ciphertextno into alphabets
c2=[]
for i in range(m):
    c2.append(chr(c1[0][i]))
print("Ciphertext:","".join(c2))

def modInverse(x,y):
    for i in range(1,y):
        if((x*i)%y==1):
            return i
    return -1
x_det=int(np.linalg.det(x))%26
det_inv= modInverse(x_det,26)
x_adj=np.array([[x[1][1],-x[0][1]],[-x[1][0],x[0][0]]])
x_inv=(x_det*x_adj)%26
#multiplying inverse key and ciphertext matrix and reshape into 2*2 matrix#
M_dec1=(np.dot(x_inv,c))%26
M_dec2=np.reshape(M_dec1+65,(1,m))

M_dec=[]
for i in range(m):
    M_dec.append(chr(M_dec2[0][i]))
print("Decrypted text:","".join(M_dec))

