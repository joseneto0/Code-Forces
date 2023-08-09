#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string s;
    cin >> n >> s;
    set<string> a;
    for (int i = 1; i < n; i++){
        string x; 
        x += s[i-1];
        x += s[i];
        a.insert(x);
    }
    cout << a.size() << '\n';
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}