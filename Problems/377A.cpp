#include <bits/stdc++.h>

using namespace std;
vector<vector<char>> matriz;
vector<vector<bool>> visitados;
int n, m, k, livres = 0, qntd=0;

void dfs(int i, int j){
    if (qntd == livres - k){
        return;
    }
    visitados[i][j] = true;
    qntd++;
    if (i > 0 && !visitados[i-1][j]){
        dfs(i-1, j);
    }
    if (i < n-1 && !visitados[i+1][j]){
        dfs(i+1, j);
    }
    if (j > 0 && !visitados[i][j-1]){
        dfs(i, j-1);
    }
    if (j < m-1 && !visitados[i][j+1]){
        dfs(i, j+1);
    }
    return;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m >> k;
    matriz.assign(n, vector<char>(m));
    visitados.assign(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
            if (matriz[i][j] == '.'){
                livres++;
            } else {
                visitados[i][j] = true;
            }
        }
    }
    bool certo = false;
    for (int i = 0; i < n; i++){
        if (certo){
            break;
        }
        for (int j = 0; j < m; j++){
            if (matriz[i][j] == '.' && !visitados[i][j]){
                dfs(i, j);
                if (qntd == livres-k){
                    certo = true;
                    break;
                } else {
                    qntd = 0;
                }
            }
        }
    }
    if (certo){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (!visitados[i][j]){
                    matriz[i][j] = 'X';
                }
                cout << matriz[i][j] << "";
            }
            cout << "\n";
        }
    }
    return 0;
}