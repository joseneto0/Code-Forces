#include <bits/stdc++.h>

using namespace std;

int somarValores(string a, string b, int m){
    int soma = 0;
    for (int i = 0; i < m; i++){
        soma += abs(a[i] - b[i]);
    }
    return soma;
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> A(n);
    for (int i =0; i < n; i++){
        cin >> A[i];
    }
    int menor = INT_MAX;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            menor = min(menor, somarValores(A[i], A[j], m));
        }
    }
    cout << menor << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}