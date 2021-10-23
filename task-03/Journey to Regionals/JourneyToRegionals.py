n=int(input())
n1=list(map(int,input().split()))
n2=[]
s=0
for i in n1:
    s+=i
    n2.append(s)
q=int(input())
for i in range(q):
    s,e=map(int,input().split())
    if s>=2:
        print(n2[e-1]-n2[s-2])
    else:
        print(n2[e-1])
