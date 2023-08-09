#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k, ent, soma=0;
    cin >> n >> k;
    vector<int> A(n*k, -1);
    vector<int> valoresFinais;
    for (int i = 0; i < n*k; i++){
        cin >> A[i];
    }
    int aux = 0;
    for (int i = 0; i < n*k; i++){
        valoresFinais.push_back(A[i]);
        aux++;
        if (aux == n){
            sort(valoresFinais.begin(), valoresFinais.end());
            soma += valoresFinais[n/2 -1];
            valoresFinais.clear();
            aux=0;
        }
    }
    cout << soma << '\n';
}
int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
