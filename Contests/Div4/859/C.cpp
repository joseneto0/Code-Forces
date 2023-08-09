#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> A;
    bool zero = true, um = false;
    for (int i = 0; i < n; i++){
        if (i == 0){
            A[s[i]] = 0;
            zero = false;
            um = true;
        } else {
            if (A.find(s[i]) == A.end()){
                if (um){
                    A[s[i]] = 1;
                    zero = true;
                    um = false;
                } else {
                    A[s[i]] = 0;
                    zero = false;
                    um = true;
                }
            } else {
                if (um && A[s[i]] == 0){
                    cout << "NO" << '\n';
                    return;
                } else if (um && A[s[i]] == 1){
                    um = false;
                    zero = true;
                } else if (zero && A[s[i]] == 1){
                    cout << "NO" << '\n';
                    return;
                } else if (zero && A[s[i]] == 0){
                    um = true;
                    zero = false;
                }
            }
        }
    }
    cout << "YES" << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}