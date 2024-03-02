#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

vector<vector<int>> adj;
vector<bool> vis;
int t;
void dfs(ll u){
    vis[u] = true;
    if (u == t){
        return;
    }
    for (auto x: adj[u]){
        if (!vis[x]){
            dfs(x);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n >> t;
    vector<ll> a(n);
    adj.assign(n+1, vector<int>());
    vis.assign(n+1, false);
    for (int i = 1 ; i <= n-1; i++){
        cin >> a[i];
        adj[i].push_back(i + a[i]);
    }
    dfs(1);
    if (vis[t]){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}