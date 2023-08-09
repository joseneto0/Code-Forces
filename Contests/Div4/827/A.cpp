#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || a + c == b || b + c == a){
        cout << "YES" << '\n';
    } else cout << "NO" << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; 
    cin >> t;
    while (t--){
        solve();
    }
}