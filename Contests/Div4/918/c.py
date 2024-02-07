from math import sqrt
t = int(input())
while (t > 0):
    n = int(input())
    l = list(map(int, input().split()))
    soma = sum(l)
    soma = str(sqrt(soma))
    if soma[2] != '0':
        print("NO")
    else:
        print("YES")
    t -= 1