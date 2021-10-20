n,m=map(int,input().split())
d1=input().split()
p1=input().split()
p=[]
d=[]
for i in d1:
    d.append(int(i))
for i in p1:
    p.append(int(i))    
ds=sorted(d) 
ps=sorted(p)
i=0
j=0
mp=[]
c=0
s=0
j=0
for i in range(m):
    if ps[i]>ds[j]:
        s+=ps[i]
        j+=1
        c+=1
    if c==n:
        print('YES')
        print(s)
        exit()
print('NO')
