t=int(input())
for i in range(t):
    import math
    a=1
    n=int(input())
    for i in range(1,n+1):
        a*=i//math.gcd(i,a)
    print(a)
