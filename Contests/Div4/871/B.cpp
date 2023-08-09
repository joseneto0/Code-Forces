#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; 
    cin >> n;
    vector<int> A(n);
    int zeros=0, maior=0;
    for (int i = 0; i < n; i++){
        cin >> A[i];
        if (A[i] == 0){
            zeros++;
        } else {
            if (zeros > maior){
                maior = zeros;
            }
            zeros = 0;
        }
    }
    if (zeros > maior){
        maior = zeros;
    }
    cout << maior << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}