def solve():
    n=int(input())
    home1=input()
    home2=input().split('->')[0]
    air = ""
    for i in range(n-1):
        air=input()
    if(n&1):
        print('contest')
        return
    else:
        print('home')
solve()