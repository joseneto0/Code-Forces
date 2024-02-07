#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if ((n+1) % 3 == 0 || (n+10) % 3 == 0 || (n-10) % 3 == 0){
        cout << "First" << "\n";
        return;
    }
    cout << "Second" << "\n";
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}