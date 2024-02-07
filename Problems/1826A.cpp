#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        int valoresDiff = 0;
        for (int j = 0; j < n; j++){
            if (i >= a[j]){
                continue;
            } else {
                valoresDiff++;
            }
        }
        if (valoresDiff == i){
            cout << i << "\n";
            return;
        }
    }
    cout << -1 << "\n";
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