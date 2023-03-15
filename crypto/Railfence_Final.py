s=input("Enter Plaintext: ")
s=s.replace(" ", "")
s=s.upper()
k=int(input("Enter key: "))
############      Encryption   #############
rail=[[" " for i in range(len(s))] for j in range(k)]
direction=0; row=0
for i in range(len(s)):
  rail[row][i]=s[i]
  if row==0:
    direction=0
  elif row==k-1:
    direction=1
  if direction==0:
    row+=1
  else:
    row-=1
for i in range(k):
  print("".join(rail[i]))
ct=[]
for i in range(k):
    for j in range(len(s)):
        if rail[i][j]!=' ':
            ct.append(rail[i][j])
cipher="".join(ct)
print("Cipher Text: ",cipher)
#############    Decryption     ##############
rail=[[" " for i in range(len(cipher))] for j in range(k)]
direction=0; row=0
for i in range(len(cipher)):
  rail[row][i]=0
  if row==0:
    direction=0
  elif row==k-1:
    direction=1
  if direction==0:
    row+=1
  else:
    row-=1
#print(rail)
r=0
for i in range(k):
    for j in range(len(cipher)):
        if rail[i][j]==0:
            rail[i][j]=cipher[r]
            r+=1

direction=0; row=0
dec_text=[]
for i in range(len(cipher)):
    if rail[row][i]!='':
        dec_text.append(rail[row][i])
    
    rail[row][i]=0
    if row==0:
        direction=0
    elif row==k-1:
        direction=1
    if direction==0:
        row+=1
    else:
        row-=1
decrypted_text="".join(dec_text)

print("Decrypted plain text: ",decrypted_text)




