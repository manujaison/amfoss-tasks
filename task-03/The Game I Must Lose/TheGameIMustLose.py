n,m=map(int,input().split())
s=[]
if n%2!=0:
    print(0)
else:
    cn=0
    while n>1 and n%2==0:
            cn+=1
            n=n/2           
    for i in range(1,m+1):
        ci=0
        j=i
        while j>1 and j%2==0:
            ci+=1
            j=j/2
        if cn>ci:     
            s.append(i)
    if len(s)==0:
        print(0)
        exit()
    print(len(s))
    print(*s, sep =" ")
