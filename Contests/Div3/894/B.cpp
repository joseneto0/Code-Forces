#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve(){
    int n;
    cin >> n;
    vector<int> b(n);
    vector<int> fim;
    for (int i = 0; i< n; i++){
        cin >> b[i];
    }
    for (int i = 0; i < n - 1; i++){
        if (b[i+1] < b[i]){
            fim.push_back(b[i]);
            fim.push_back(min(b[i], b[i+1]));
        } else {
            fim.push_back(b[i]);
        }
    }
    fim.push_back(b[n-1]);
    int m = fim.size();
    cout << m << '\n';
    for (int i = 0; i < m; i++){
        cout << fim[i] << ' ';
    }
    cout << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}