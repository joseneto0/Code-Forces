#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k, maximo=240, cont=0;
    cin >> n >> k;
    if (k < maximo) {
        int tempoRestante = maximo - k;
        for (int i = 1; i <= n; i++){
            if (tempoRestante > 0 && tempoRestante - ((1 + (i-1)) * 5) >= 0){
                tempoRestante -= ((1 + (i-1)) * 5);
                cont++;
                
            } else {
                break;
            }
        }
    }
    cout << cont << '\n';
}