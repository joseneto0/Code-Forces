#include <bits/stdc++.h>

using namespace std;

void solve(){
    char c;
    string code = "codeforces";
    cin >> c;
    if (find(code.begin(), code.end(), c) != code.end()){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}
