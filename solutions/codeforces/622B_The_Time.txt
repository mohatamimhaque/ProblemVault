h,m = [int(x) for x in input().split(':')]
a = int(input())
m+=a
h+=(m//60)
h=str(h%24)
m=str(m%60)
if(len(h)==1):
    h="0"+h
if(len(m)==1):
    m="0"+m
print("{}:{}".format(h,m))