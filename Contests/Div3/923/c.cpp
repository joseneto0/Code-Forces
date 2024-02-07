#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m), freqA(k+1, 0), freqB(k+1, 0);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] <= k) freqA[a[i]]++;
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
        if (b[i] <= k) freqB[b[i]]++;
    }
    set<int> x, y, ans, resp;
    for (int i = 1; i <= k; i++){
        resp.insert(i);
        if (freqA[i] > 0){
            x.insert(i);
            ans.insert(i);
        }
        if (freqB[i] > 0){
            y.insert(i);
            ans.insert(i);
        }
    }
    if ((resp.size() == ans.size()) && (x.size() >= k/2) && (y.size() >= k/2)){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << '\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}