#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    string yes = "YES";
    cin >> s;
    for (int i =0; i< 3;i ++){
        s[i] = toupper(s[i]);
    }
    if (s == yes) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}