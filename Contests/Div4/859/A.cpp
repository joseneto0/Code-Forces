#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a - b == c){
        cout << '-' << '\n';
    } else if (a + b == c){
        cout << '+' << '\n';
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