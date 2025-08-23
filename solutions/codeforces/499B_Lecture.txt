n,m=list(map(int,input().split()))
words = {}
for i in range(m):
    key,val = list(map(str,input().split()))
    words[key] = val

lect = input().split()
for i in range(len(lect)):
    if(len(lect[i])>len(words[lect[i]])):
        lect[i] = words[lect[i]]
print(' '.join(lect))