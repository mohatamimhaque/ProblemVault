def total_burning_hours(a, b):
    hours = 0
    stubs = 0

    while a > 0:
        hours += a
        stubs += a
        a = stubs // b
        stubs = stubs % b  #

    return hours

a, b = map(int, input().split())
print(total_burning_hours(a, b))
