#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    string code= "codeforces";
    int dif=0;
    for (int i = 0; i < 10; i++){
        if (s[i] != code[i]){
            dif++;
        }
    }
    cout << dif << '\n';
}

int main(void){
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}