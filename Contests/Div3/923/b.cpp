#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    string ans = "";
    char atual = 'a';
    bool igual = false;
    vector<char> palavras(n, '-'); 
    palavras[a[0]] = atual;
    ans += atual;
    for (int i = 1; i < n; i++){
        if (palavras[a[i]] == '-'){
            palavras[a[i]] = 'a';
        } else {
            palavras[a[i]] = char(palavras[a[i]] + 1);
        }
        ans += palavras[a[i]];
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