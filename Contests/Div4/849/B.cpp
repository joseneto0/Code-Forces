#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cB = 0, dE = 0;
    for (int i = 0 ; i < n ; i++){
        if (cB == 1 && dE == 1){
            cout << "YES" << '\n';
            return;
        }
        if (s[i] == 'U') cB++;
        else if (s[i] == 'D') cB--;
        else if(s[i] == 'L') dE --;
        else dE++;

    }
    if (cB == 1 && dE == 1){
        cout << "YES" << '\n';
     
    }else cout << "NO" << '\n';
    
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}