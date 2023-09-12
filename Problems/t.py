l = []
for i in range(15):
    l.append(int(input()))
par = impar = 0
for i in range(15):
    if l[i] % 2 == 0:
        print(f"par[{par}] = {l[i]}")
        par += 1
        if (par == 5):
            par = 0
    else:
        print(f"impar[{impar}] = {l[i]}")
        impar += 1
        if (impar == 5):
            impar = 0
    