#include <bits/stdc++.h>

using namespace std;

string s;
void rec(string s){
    if (s[0] == '1' && s[s.size()-1] == '0' || s[0] == '0' && s[s.size() - 1] == '1'){
        s.erase(0, 1);
        s.erase(s.size()-1, 1);
    } else {
        cout << s.size() << '\n';
        return;
    }
    rec(s);
}

void solve(){
    int n;
    cin >> n;
    cin >> s;
    rec(s);
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}