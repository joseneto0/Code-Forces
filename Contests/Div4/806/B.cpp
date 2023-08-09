#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string aux;
    vector<int> A(n);
    int cont = 0;
    cin >> aux;
    for (int i = 0; i < n; i++){
        if (find(A.begin(), A.end(), aux[i]) != A.end()){
            cont++;
        } else {
            cont += 2;
            A[i] = aux[i];
        }
    }
    cout << cont << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}