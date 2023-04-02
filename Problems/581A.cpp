#include <bits/stdc++.h>

using namespace std;

int main(void){
    int a, b, meiasDiferentes=0,meiasIguais=0;
    cin >> a >> b;
    if (a > b){
        meiasDiferentes = b;
        meiasIguais = (a - b) / 2;
    } else if (b > a){
        meiasDiferentes = a;
        meiasIguais = (b - a) / 2;
    } else {
        meiasDiferentes = a;
        meiasIguais = 0;
    }
    cout << meiasDiferentes << ' ' << meiasIguais << '\n';
}