t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    l = 0
    r = n-1
    ans = 0
    while k > 0 and l <= r:
        if a[l] == 0:
            l += 1
        elif a[r] == 0:
            r -= 1
        else:
            if l == r:
                ans += 1
            else:
                ans += 2
            k -= 1
            if a[l] < a[r]:
                r -= 1
            else:
                l += 1
    print(ans)