#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    vector<string> prefix(n + 1), sufix(n+1);
    set<string> prefixDifs, sufixDifs;
    vector<int> prefixFim(n+1), sufixFim(n+1);
    for (int i = 0; i < n; i++){
        prefix[i+1] = prefix[i] + s[i];
        prefixDifs.insert(prefix[i+1]);
    }
    for (int i = n-1; i >= 0; i--){
        sufix[i] = sufix[i+1] + s[i];
        sufixDifs.insert(sufix[i]);
    }
    for (string x: prefixDifs){
        cout << x << '\n';
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