#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll busca_binaria(vector<ll> &doces, ll inicio, ll fim, ll valor, ll resp){
    while (inicio <= fim){
        int meio = (fim + inicio) /  2;
        if (doces[meio-1] >= valor){
            resp = meio;
            fim = meio - 1;
        }
        else inicio = meio + 1;
    }
    
    return resp;
}
void solve(){
    ll n, q, aux;
    cin >> n >> q;
    vector<ll> doces(n); 
    for (ll i = 0; i < n; i++){
        cin >> doces[i];
    }
    sort(doces.rbegin(), doces.rend());
    for (int i = 1; i < n; i++){
        doces[i] += doces[i-1];
    }
    for (int i = 0; i < q; i++){
        cin >> aux;
        cout << busca_binaria(doces, 1, n, aux, -1) << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}