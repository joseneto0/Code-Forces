#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < n; i++){
        if (s1[i] == 'R') {
            if (s2[i] != 'R'){
                cout << "NO" << '\n';
                return;
            }
        } else {
            if (s2[i] == 'R'){
                cout << "NO" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}