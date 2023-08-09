def solve():
    n = int(input())
    s = input()
    eD = cB = 0
    for i in range(n):
        if (eD == 1 and cB == 1):
            print("YES")
            return
        if s[i] == "L":
            eD -= 1
        elif s[i] == "R":
            eD += 1
        elif s[i] == "D":
            cB -= 1
        else:
            cB += 1
    if (eD == 1 and cB == 1):
        print("YES")
    else:
        print("NO")
        
t = int(input())
while (t>0):
    solve()
    t -= 1