#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t, n, aux, cont=0, positivo=0, negativo=0, resultado = 0;
    bool positivoBool=true;
    vector<int> maximo;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        for (int j = 0; j < n; j++){
            cin >> aux;
            maximo.push_back(aux);
        }
        sort(maximo.begin(), maximo.end());
        reverse(maximo.begin(), maximo.end());
        for (int j = 0; j < n; j++){
            if (maximo[j] > 0){
                cont++;
                positivo++;
            } else {
                cont--;
                negativo++;
            }
            cout << cont << ' ';
        }
        cout << '\n';
        for (int j = 1; j <= n; j++){
            if (j <= negativo * 2){
                cout << j % 2 << ' ';
            } else {
                cout << (j - negativo * 2) << ' ';
            }
       }
       cout << '\n';
       positivo = negativo = cont = 0;
       maximo.clear();
    }
}