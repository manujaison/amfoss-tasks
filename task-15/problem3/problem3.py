t=int(input())
for i in range(t):
    n=int(input())
    i=2
    while i*i<n:
        while n%i==0:
            n=n/i
            i=i+1
    print(int(n))
    
