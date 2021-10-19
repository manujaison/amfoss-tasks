import math
n=int(input())
x=math.sqrt(n)
y=math.floor(x)
c=0
for i in range(1,y+1):
    if n%i==0:
        c+=1
if x-y==0:
    print(2*c-1)
else:
    print(2*c)
    
