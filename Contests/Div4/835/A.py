def solve():
    val = list(map(int, input().split()))
    val.sort()
    print(val[1])

t = int(input())
for i in range(t):
    solve()