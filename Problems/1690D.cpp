#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve(){
    int n, k, cont;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> preffix(n+1);
    for (int i = 1; i <= n; i++){
        if (s[i-1] == 'W'){
            cont = 1;
        } else {
            cont = 0;
        }
        preffix[i] = preffix[i-1] + cont;
    }
    int fim = INT_MAX;
    for (int i = k; i <= n; i++){
        fim = min(fim, preffix[i] - preffix[i-k]);
    }
    cout << fim << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--){
        solve();
    }
}