#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string alf = "abcdefghijklmnopqrstuvwxyz";
    int maior = 0;
    for (int i = 0; i < s.size(); i++){
        int a = alf.find(s[i]);
        maior = max(maior, a);
    }
    cout << maior+1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}