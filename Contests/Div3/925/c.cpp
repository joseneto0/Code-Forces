#include <bits/stdc++.h>

#define ll long long 

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> preff(n+1, 0);
    int soma = 0;
    for (int i = 1; i <= n; i++){
        cin >> preff[i];
        preff[i] += preff[i-1];
    }
    int media = preff[n] / n;
    for (int i = 1; i <= n; i++){
        if (preff[i]/i < media){
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
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