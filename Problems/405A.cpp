#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, aux;
    cin >> n;
    vector<int> valores;
    for (int i = 0; i < n ; i++){
        cin >> aux;
        valores.push_back(aux);
    }
    sort(valores.begin(), valores.end());
    for (int i = 0; i < n; i++){
        if (i < n - 1) cout << valores[i] << ' ';
        else cout << valores[i] << '\n';
    }
}