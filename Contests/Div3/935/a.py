from math import ceil
t = int(input())
while (t > 0):
    a, b, c= map(int, input().split())
    totalB = b % 3
    if (totalB + c >= 3 or totalB == 0):
        print(a + ceil((b+c)/3))
    else:
        print(-1)
    t -= 1