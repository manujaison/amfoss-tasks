n=int(input())
l=[]
x=0
w=input()
s=w.split()
x=list(set(s))
l=[]
n=(len(x))
for i in s:
    c=s.count(i)
    l.append(c)
print(max(l),n)   
