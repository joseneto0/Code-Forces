#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    int b;
    string moves;
    for (int i = 0; i < n; i++){
        cin >> b >> moves;
        for (int j = 0; j < b; j++){

            if (moves[j] == 'D'){
                A[i] += 1;
            } else {
                A[i] -= 1;
            }
            if (A[i] == 10){
                A[i] = 0;
            } else if (A[i] == -1){
                A[i] = 9;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << A[i] << ' ';
    }
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}