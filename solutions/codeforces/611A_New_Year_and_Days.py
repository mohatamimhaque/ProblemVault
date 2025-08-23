ll = input().split()
if('month' in ll):
    if(int(ll[0])<=29):
        print(12,end='\n')
    if(int(ll[0])==30):
        print(11,end='\n')
    if(int(ll[0])==31):
        print(7,end='\n')
else:
    if(int(ll[0]) == 5 or int(ll[0])==6):
        print(53,end='\n')
    else:
        print(52,end='\n')