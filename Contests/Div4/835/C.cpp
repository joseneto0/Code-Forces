#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> S(n);
    vector<int> copia(n);
    for (int i = 0; i < n; i++){
        cin >> S[i];
        copia[i] = S[i];
    }
    sort(copia.begin(), copia.end());
    for (int i = 0; i < n; i++){
        if (S[i] == copia[n-1]){
            cout << S[i] - copia[n-2] << ' ';
        } else {
            cout << S[i] - copia[n-1] << ' ';
        }
    }
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}