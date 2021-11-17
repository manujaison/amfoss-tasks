n=int(input())
s=input()
m=''
f=''
for i in range (n):
    if s.count(s[i])>1 and s[i] not in f:
        f+=s[i]
    elif s.count(s[i])>2 and f.count(s[i])<s.count(s[i])//2:  
        f+=s[i]
    elif s.count(s[i])%2!=0 and len(m)<1 and n%2==0:
        m+=s[i]
    elif s.count(s[i])%2!=0 and n%2!=0 and s.count(s[n//2])%2==0 and len(m)<1:
        m+=s[i]
if n%2!=0 and s.count(s[n//2])%2!=0:
    m+=s[n//2]
sh=''    
sh+=f[::-1]  
fs=f+m+sh
if len(fs)==0:
    print(0)
    print(s[0])
else:    
    print(len(fs))
    print(fs)
    
    
        

