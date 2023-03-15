p=int(input('Enter the value of prime:'))
a=int(input('Enter the value whose inverse is requried:'))
for i in range(1,p):
    if (i*a)%p==1:
        break
print('Requried multiplicative inverse of {} is {}'.format(a,i))
print('Requried additive inverse of {} is {}'.format(a,p-a))
