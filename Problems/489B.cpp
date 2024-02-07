#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cont = 0;
    vector<bool> vis1(n, false), vis2(m, false);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (abs(a[i]-b[j]) <= 1 && !vis1[i] && !vis2[j]){
                cont++;
                vis1[i] = true;
                vis2[j] = true;
                break;
            }
        }
    }
    cout << cont << "\n";
    return 0;
}