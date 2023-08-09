#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    cout << A[n-1] - A[0] << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; 
    while(t--){
        solve();
    }
}