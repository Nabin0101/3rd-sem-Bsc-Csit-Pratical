def gcd(p,q):
    while q!=0:
        p,q=q,p%q
    return p

def find_order(a,m):
    if gcd(a,m) != 1:
        print("a and m should be relative prime!")
        return -1
    for i in range(1,m):
        if pow(a,i)%m==1:
            return i
    return -1

def find_primitive_root(n):
    p_root_list = []
    for i in range(1,n):
        if find_order(i,n) == n-1:
            p_root_list.append(i)
    return p_root_list

n=int(input('Enter number for primitive roots:'))
print(find_primitive_root(n))