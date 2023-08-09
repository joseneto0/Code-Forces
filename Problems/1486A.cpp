#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> H(n);
    long long valorI = 0, somaValores = 0;
    bool resp = true;
    for (int i = 0; i < n; i++){
        cin >> H[i];
    }
    for (int i = 0; i < n; i++){
        valorI += i;
        somaValores += H[i];
        if (somaValores < valorI){
            resp = false;
            break;
        }
    }
    if (resp == true){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}


int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}