#include <bits/stdc++.h>

using namespace std;

#define ll long long int;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> ordn(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        ordn[i] = a[i];
    }
    sort(a.begin(), a.end());
    int cont = 0, maior = 0;
    for (int i = 1; i < n; i++){
        if (a[i] - a[i-1] <= k){
            cont++;
        } else {
            maior = max(maior, cont);
            cont = 0;
        }
        if (i == n - 1){
            maior = max(maior, cont);
        }
    }
    cout << n - 1 - maior << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}