#include <bits/stdc++.h>

using namespace std;

void solve(){
    string n;
    cin >> n;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 6; i++){
        if (i < 3) sum1 += int(n[i]);
        else sum2 += int(n[i]);
    }
    if (sum1 == sum2) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}