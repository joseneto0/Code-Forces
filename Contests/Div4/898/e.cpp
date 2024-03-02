#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l = 1, r = 4000000005, soma, ans = 0, mid;
    while (l <= r){
        mid = (l + r) / 2;
        soma = 0;
        for (int i = 0; i < n; i++){
            soma += max(1LL * 0, mid - a[i]);
        }
        if (soma <= x){
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
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