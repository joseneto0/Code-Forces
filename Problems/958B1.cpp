#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, u, v;
    cin >> n;
    int matriz[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matriz[i][j] = 0;
        }
    }
    for (int i = 0; i < n-1; i++){
        cin >> u >> v;
        u -= 1; v -=1;
        matriz[u][v] = 1;
        matriz[v][u] = 1;
    }
    int qtd = 0, res = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matriz[i][j] == 1){
                qtd++;
            } 
        }
        if (qtd == 1){
            res ++;
        }
        qtd = 0;
    }
    cout << res << '\n';
}