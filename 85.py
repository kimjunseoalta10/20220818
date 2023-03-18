a,b,c=input().split()
a=int(a)
b=int(b)
c=int(c)
s=a*b*c
s=s/8/1024/1024
print('%.2f'%s,'MB')