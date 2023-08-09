def solve():
    n = int(input())
    s = input()
    prefix = [""] * (n + 1)
    sufix = [""] * (n + 1)
    for i in range(n):
        prefix[i+1] = prefix[i] + s[i]
    for i in range(n-1, -1, -1):
        sufix[i] = sufix[i+1] + s[i]
    maior = 0
    for i in range(n):
        maior = max(maior, len(set(prefix[i])) + len(set(sufix[i])))
    print(maior)

t = int(input())
for i in range(t):
    solve()