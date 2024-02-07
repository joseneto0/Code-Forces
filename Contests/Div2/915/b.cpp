#include <bits/stdc++.h>

using namespace std;

vector<bool> visitados;
vector<vector<int>> grafo;

void dfs(int i){
    visitados[i] = true;
    for (auto x: grafo[i]){
        if (!visitados[x]){
            dfs(x);
        }
    }
    return;
}

void solve(){
    int n, a, b;
    cin >> n;
    grafo.assign(n+1, vector<int>());
    visitados.assign(n+1, false);
    for (int i = 0; i < n-1; i++){
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    int cont = 0;
    for (int i = 1; i <= n; i++){
        if (!visitados[i]){
            dfs(i);
            cont++;
        }
    }
    cout << cont << "\n";
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}