page = int(input())
daily_page = list(map(int, input().split()))
finished_date = 0
i=0
while(page>0):
    page-=daily_page[i]
    i = (i+1)%7
if(i==0):
    print(7)
else:
    print(i)