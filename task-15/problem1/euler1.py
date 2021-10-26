t=int(input())
for i in range(t):
    n=int(input())
    a=(n-1)//3
    b=(n-1)//5
    c=(n-1)//15
    s=(a*(a+1))*3+(b*(b+1))*5-(c*(c+1))*15
    print(s//2)
