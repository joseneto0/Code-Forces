def solve():
    a, b, c = map(int, input().split())
    if (a + b == c or a + c == b or b + c == a):
        print("YES")
    else:
        print("NO")

t = int(input())
for i in range(t):
    solve()