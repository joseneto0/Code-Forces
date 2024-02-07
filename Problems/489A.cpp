#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n), aux(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        aux[i] = a[i];
    }
    sort(aux.begin(), aux.end());
    vector<pair<int, int>> ans;
    for (int i = 0; i < n; i++){
        if (a[i] != aux[i]){
            for (int j = i+1; j < n; j++){
                if (a[j] == aux[i]){
                    ans.push_back({i, j});
                    a[j] = a[i];
                    a[i] = aux[i];
                    break;
                }
            }
        }
    }
    cout << ans.size() << "\n";
    for (auto x: ans){
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}