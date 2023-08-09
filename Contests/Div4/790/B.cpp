#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    int menor = *min_element(A.begin(), A.end());
    int sum = 0;
    for (int i = 0 ; i < n ; i++){
        if (A[i] != menor){
            sum += A[i] - menor;
        }
    }
    cout << sum << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}