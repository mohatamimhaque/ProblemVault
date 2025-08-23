def solve():
    str=input()
    a, b = int(str[0]),int(str[-1])
    if(a==b):
        print("{}={}".format(a,b))
    if(a>b):
        print("{}>{}".format(a,b))
    if(a<b):
        print("{}<{}".format(a,b))
n=int(input())
for i in range(n):
    solve()