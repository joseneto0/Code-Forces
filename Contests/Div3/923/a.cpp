#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cont = 0, ultimo, primeiro = INT_MAX;
    for (int i = 0; i < n; i++){
        if (s[i] == 'B'){
            primeiro = min(primeiro, i);
            ultimo = i;
        }
    }
    for (int i = primeiro; i <= ultimo; i++){
        cont++;
    }
    cout << cont << "\n";
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