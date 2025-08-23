def solve():    
    a=input()
    b=input()
    v='aeiou'
    if(len(a) != len(b)):
        print("NO\n")
        return
    i=0
    while(i<len(a)):
        if(a[i] in v and b[i] not in v or a[i] not in v and b[i] in v):
            print("NO\n")
            return
        i+=1
    print("YES\n")



solve()