plaintext=input('Enter plaintext: ')
s=int(input('Enter number of shifts: '))
plaintext=plaintext.upper()
#encryption
def encrypt_func(plaintext):
    cipher=""
    for i in range (len(plaintext)):
        if plaintext[i]==" ":
            cipher+=" "
        else:
            cipher+= chr((ord(plaintext[i]) + s-65)%26+65)
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
            decrypt_plaintext+= chr((ord(ciphertext[i]) - s-65)%26+65)
    return decrypt_plaintext
print("Decrypted plain txt: " + decrypt_func(ciphertext))
