#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n, q, l, r;
    cin >> n;
    vector<int> a(n+1);
    vector<pair<int, int>> freq(n+1, {0,0});
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    freq[1].first = 1;
    freq[1].second = 1;
    map<string, int> mp;
    for (int i = 2; i <= n; i++){
        if (a[i] != a[i-1] && mp[to_string(a[i-1])+to_string(a[i])] == 0 && mp[to_string(a[i])+to_string(a[i-1])] == 0){
            mp[to_string(a[i])+to_string(a[i-1])]++;
            mp[to_string(a[i-1])+to_string(a[i])]++;
            freq[i].first = freq[i-1].first + 1;
            freq[i].second = i;
        } else {
            freq[i].first = freq[i-1].first;
            freq[i].second = freq[i-1].second;
        }
    }
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> l >> r;
        if (freq[l].first != freq[r].first){
            if (a[l] == a[r]){
                if (freq[r].second == r)cout << freq[l].second << " " << freq[r].second-1 << "\n";
                else cout << freq[l].second << " " << freq[r].second << "\n";
            } else {
                cout << freq[l].second << " " << freq[r].second << "\n";
            }
        } else {
            cout << -1 << " " << -1 << "\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
        if (t > 0)  cout << '\n';
    }
    return 0;
}