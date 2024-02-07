#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int cont=0, resp = 0;
vector<vector<int>> grafo;
vector<int> visitados;

int dfs(int i){
    visitados[i] = 1;
    cont = 0;
    for (auto x: grafo[i]){
        if (visitados[x] == 0){
            cont += dfs(x);
        } else if (visitados[x] == 1){
            cont++;
        }
    }
    visitados[i] = 2;
    return cont;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, x, y;
    cin >> n >> m;
    grafo.assign(n+1, vector<int>());
    visitados.assign(n+1, 0);
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        grafo[x].push_back(y);
        grafo[y].push_back(x);
    }
    for (int i = 0; i < m; i++){
        if (visitados[i] == 0){
            resp += dfs(i);
        }
    }
    cout << resp << "\n";
    return 0;
}