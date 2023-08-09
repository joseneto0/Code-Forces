from string import ascii_lowercase
def solve():
    n = int(input())
    s = input()
    alf = ascii_lowercase
    maior = 0
    for i in s:
        maior = max(maior, alf.index(i))
    print(maior+1)


t = int(input())
for i in range(t):
    solve()