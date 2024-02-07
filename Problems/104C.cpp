#include <bits/stdc++.h>

using namespace std;

int n, m, cont=0;
vector<vector<int>> grafo;
vector<bool> visitados;

void dfs(int i){
    visitados[i] = true;
    cont++;
    for (auto x: grafo[i]){
        if (!visitados[x]){
            dfs(x);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    int a, b;
    grafo.assign(n+1, vector<int>());
    visitados.assign(n+1, false);
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    dfs(1);
    if (n == m && cont == n){
        cout << "FHTAGN!" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}