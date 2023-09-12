#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<int> visitados(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++){
        visitados[a[i].second] = n - i;
    }
    for (int i =0; i < n; i++){
        cout << visitados[i] << ' ';
    }
    cout << '\n';
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}