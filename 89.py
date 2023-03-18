a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
for i in range(1,c) :
    a*=b
    c+=1
print(a)