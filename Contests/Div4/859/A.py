def solve():
    a, b, c = map(int, input().split())
    if (a - b == c):
        print("-")
    elif (a + b == c):
        print("+")

t = int(input())
while (t > 0):
    solve()
    t -= 1
