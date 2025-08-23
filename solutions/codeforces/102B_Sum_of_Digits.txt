ss = input()
op=0
while(len(ss)>=2):
    sumOfDigit=0
    for x in ss:
        sumOfDigit+=(int(x))
    ss=str(sumOfDigit)
    op+=1
print(op)