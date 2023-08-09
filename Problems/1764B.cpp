#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, aux;
    cin >> n;
    vector<int> A(n);
    set<int> F;
    for (int i = 0; i < n; i++){
        cin >> aux;
        A[i] = aux;
        F.insert(aux);
    }
    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            F.insert(A[i] - A[j]);
        }
    } 
    cout << F.size() << '\n';
}
int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--){
        solve();
    }
}