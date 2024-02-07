#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;



void solve(){
    ll a, b, menor = INT_MAX, maior = 0;
    cin >> n;
    map<ll, int> dicio;
    for (ll i = 0; i < n; i++){
        cin >> a >> b;
        if (a < menor && a < b){
            menor = a;
        } else if (b < menor && b < a){
            menor = b;
        }
        if (a > maior && a > b){
            maior = a;
        } else if (b > maior && b > a){
            maior = b;
        }
        dicio[b] = 1;
    }
    ll cont = 0;
    for (ll i = menor; i <= maior; i++){
        if (dicio.find(i) != dicio.end()){
            cont++;
        }
    }
    cout << cont << "\n";
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