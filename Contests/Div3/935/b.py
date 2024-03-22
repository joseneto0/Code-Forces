from math import gcd

def max_fogos_visiveis(A, B, m):
    lcm = (A * B) // gcd(A, B)  # Calcula o mínimo múltiplo comum de A e B
    max_fogos = (m // lcm) * 2  
    return max_fogos

if __name__ == '__main__':
    t = int(input())
    while (t > 0):
        a, b, m = map(int, input().split())
        print(max_fogos_visiveis(a, b, m))
        t -= 1