t=int(input())
for i in range(t):
    s1=[]
    n,k=map(int,input().split())
    s=input().split(' ')
    for i in s:
        s1.append(float(i))
    if k>0 and  min(s1)<0 and (-1*min(s1))>max(s1):
        print(-1*min(s1),end=' ')
    else:
        print(max(s1))
