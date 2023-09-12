#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e3+10;

void solve(){
    int a, b, c, aux, cont = 0;
    cin >> a >> b >> c;
    if (b > a){
        aux = a;
        a = b;
        b = aux;
    }
    while (a > b){
        a -= c;
        b += c;
        cont++;
    }
    cout << cont << '\n';
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}