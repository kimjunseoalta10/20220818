a,b,c,d=input().split()
a=int(a)
b=int(b)
c=int(c)
d=int(d)
s=a*b*c*d
s=s/8/1024/1024
print('%.1f'%s,'MB')