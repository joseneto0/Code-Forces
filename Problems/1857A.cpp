#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, v, soma=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> v;
        soma += v;
    }
    if (soma % 2 == 0){
        cout << "YES" << '\n';
    } else cout << "NO" << '\n';
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}