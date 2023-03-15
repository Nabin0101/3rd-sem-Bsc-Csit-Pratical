plaintext=input('Enter plaintext: ')
keyword=input('Enter keyword:')
plaintext=plaintext.upper()
keyword=keyword.upper()
#key generation
def generatekey(plaintext, key):
    key=list(key)
    if len(plaintext)== len(key):
        return(key)
    else:
        for i in range(len(plaintext)-len(key)):
            key.append(key[i%len(key)])
    return ("".join(key))
key=generatekey(plaintext, keyword)
print(key)
#encryption
def encrypt_func(plaintext):
    cipher=""
    for i in range (len(plaintext)):
        if plaintext[i]==" ":
            cipher+=" "
        else:
            cipher+= chr((ord(plaintext[i]) + ord(key[i])-65)%26+65)
    return cipher
print("Cipher txt: " + encrypt_func(plaintext))
#decryption
ciphertext=encrypt_func(plaintext)
def decrypt_func(ciphertext):
    decrypt_plaintext=" "
    for i in range (len(ciphertext)):
        if ciphertext[i]==" ":
            decrypt_plaintext+=" "
        else:
            decrypt_plaintext+= chr((ord(ciphertext[i]) - ord(key[i])-65)%26+65)
    return decrypt_plaintext
print("Decrypted plain txt: " + decrypt_func(ciphertext))
