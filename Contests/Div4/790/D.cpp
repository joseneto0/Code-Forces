#include <bits/stdc++.h>

using namespace std;

int somarValores(string a, string b, int m){
    int soma = 0;
    for (int i = 0; i < m; i++){
        soma += abs(a[i] - b[i]);
    }
    return soma;
}

void solve(){
    int n, m;
    cin >> n >> m;
    int matriz[n][m];
    for (int i =0; i < n; i++){
        for (int j= 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j < m ; j++){
            int soma = 0;
            
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}