#include <bits/stdc++.h>

using namespace std;
int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, b, l, aux,soma=0,cont=0;
    cin >> n >> b >> l;
    while(n--){
        cin >> aux;
        if (aux <= b){
            soma += aux;
            if (soma > l){
                cont++;
                soma = 0;
            }
        }
    }
    cout << cont << '\n';
}