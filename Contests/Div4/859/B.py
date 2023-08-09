def solve():
    n = int(input())
    valores = list(map(int, input().split()))
    par = impar = 0
    for i in range(n):
        if (valores[i] % 2 == 0):
            par += valores[i]
        else:
            impar += valores[i]
    print("YES" if par > impar else "NO")

t = int(input())
while (t > 0):
    solve()
    t -= 1