#include <bits/stdc++.h>

using namespace std;

set<int> A;
void dividir(int n){
    A.insert(n);
    if (n % 3 != 0){
        return;
    }
    dividir(n/3);
    dividir((n/3) * 2);
}

void solve(){
    int n,m;
    cin >> n >> m;
    if (n % 3 == 0){
        A.clear();
        dividir(n);
        if (A.find(m) != A.end()){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    } else if (n == m) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
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