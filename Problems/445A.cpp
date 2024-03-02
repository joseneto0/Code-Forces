#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

vector<vector<char>> adj;
vector<vector<bool>> vis;

int n, m;

bool isValid(int row, int col){
    if (row < 0 || col < 0 || row >= n || col >= m || vis[row][col]) return false;
    return true;
}

void dfs(int i, int j, char atual){
    vis[i][j] = true;
    adj[i][j] = atual;
    if (atual == 'B'){
        atual = 'W';
    } else {
        atual = 'B';
    }
    if (isValid(i+1, j)){
        dfs(i+1, j, atual);
    }
    if (isValid(i-1, j)){
        dfs(i-1, j, atual);
    }
    if (isValid(i, j+1)){
        dfs(i, j+1, atual);
    }
    if (isValid(i, j-1)){
        dfs(i, j-1, atual);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    adj.assign(n, vector<char>(m, ' '));
    vis.assign(n+1,vector<bool>(m+1, false));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> adj[i][j];
            if (adj[i][j] == '-'){
                vis[i][j] = true;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (!vis[i][j]){
                dfs(i, j, 'B');
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << adj[i][j];
        }
        cout << "\n";
    }
    return 0;
}