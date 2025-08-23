h1,m1=list(map(int,input().split(':')))
h2,m2=list(map(int,input().split(':')))
m=m1-m2
h=h1-h2
if(m<0):
    h-=1
    m+=60
if(h<0):
    h+=24
if(m<10):
    m='0'+str(m)
if(h<10):
    h='0'+str(h)
print("{}:{}".format(h,m))

