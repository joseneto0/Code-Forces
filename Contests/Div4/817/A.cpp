#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string nome = "Timur";
    sort(nome.begin(), nome.end());
    sort(s.begin(), s.end());
    if (nome == s){
        cout << "YES" << '\n';
    } else cout << "NO" << '\n';
}   

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}