def solve():
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n):
        diferentes = 0
        for j in range(n):
            if i >= a[j]:
                continue
            else:
                diferentes += 1
        if diferentes == i:
            print(i)
            return
    print(-1)


t = int(input())
while (t > 0):
    solve()
    t -= 1   
