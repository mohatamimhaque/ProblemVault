def solve():
    n,t=list(map(int,input().split()))
    v = (1000000000,-1)
    for i in range(n):
        x,y = map(int,input().split())
        while(x<t):
            x+=y
        v=min((x,i),v)
    print(v[1]+1)
        

solve()