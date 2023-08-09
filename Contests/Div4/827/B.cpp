#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    map<int, int> A;
    int aux;
    bool repetido = false;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (A.count(aux) != 0){
            A[aux] ++;
            repetido = true;
        } else {
            A[aux] = 1;
        }
    }
    if (repetido) cout << "NO" << '\n';
    else cout << "YES" << '\n';
    
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin>> t;
    while(t--){
        solve();
    }
}