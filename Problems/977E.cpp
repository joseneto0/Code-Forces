#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e3+10;

vector<vector<int>> grafo(MAX);
vector<bool> visitados(MAX);

bool dfs(int v){
    visitados[v] = true;
    for (auto x: grafo[v]){
        if (!visitados[x]){
            dfs(x);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    return 0;
}