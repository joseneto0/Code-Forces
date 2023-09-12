#include <bits/stdc++.h>

using namespace std;

#define ll long long int;

void solve(){
    int n;
    cin >> n;
    string s, s1;
    cin >> s;
    set<char> a;
    set<char> b;
    vector<int> prefix(n), sufix(n);
    for (int i = 0; i < n-1; i++){
        a.insert(s[i]);
        prefix[i] = a.size();
    }
    for (int i = n-1; i >= 0; i--){
        b.insert(s[i]);
        sufix[i] = b.size();
    }
    int maior = 0;
    for (int i = 0; i < n-1; i++){
        maior = max(maior, prefix[i] + sufix[i+1]);
    }
    cout << maior << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}