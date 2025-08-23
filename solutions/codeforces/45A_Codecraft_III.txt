def solve():
    months = "January, February, March, April, May, June, July, August, September, October, November, December".split(', ')
    k = months[(months.index(input()) + int(input()))%12]
    print(k)
solve()

