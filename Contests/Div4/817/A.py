def solve():
    n = int(input())
    s = input()
    nome = "Timur"
    nome = sorted(nome)
    nome = ''.join(nome)
    s = sorted(s)
    s = ''.join(s)
    print("YES" if s == nome else "NO")

t = int(input())
for i in range(t):
    solve()