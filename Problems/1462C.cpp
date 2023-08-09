#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x;
    string n;
    cin >> x;
    n = to_string(x);
    if (n.size() == 1){
        cout << x << '\n';
        return;
    } else if (x > 45){
        cout << -1 << '\n';
        return;
     } else {
        n = "";
        for (int i = 9; i >= 1; i--){
            if (x <= 9 && x <= i){
                n += to_string(x);
                x = 0;
                break;
            } else {
                n += to_string(i);
                x -= i;
            }
        }
    }
    reverse(n.begin(), n.end());
    if (x < 0){
        cout << -1 << '\n';
    } else {
        cout << n << '\n';
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