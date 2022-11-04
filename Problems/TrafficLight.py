t = int(input())
for i in range(t):
    n, c = input().split()
    n = int(n)
    string = input()
    string += string
    cont = maior = 0
    for i in range(len(string)):
        if string[i] == c:
            cont = 0
            while string[i] != "g" and i < n:
                cont += 1
                i += 1
            if cont > maior:
                maior = cont
    print(maior)