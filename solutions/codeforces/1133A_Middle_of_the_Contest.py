h1,m1=list(map(int,input().split(':')))
h2,m2=list(map(int,input().split(':')))
diff=int(((h2*60+m2)-(h1*60+m1))//2)
m=(m1+diff%60)
h=h1+diff//60
if(m>=60):
    h+=(m//60)
    m%=60

if(m<10):
    m='0'+str(m)
if(h<10):
    h='0'+str(h)
print("{}:{}".format(h,m))