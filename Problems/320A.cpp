#include <bits/stdc++.h>

using namespace std;

void solve(string n){
    bool resp = true;
    int state = 0;
    if (n[0] != '1'){
        resp = false;
    }
    for (int i = 0; i < n.size(); i++){
        if (n[i] != '1' && n[i] != '4'){
            resp = false;
            break;
        }
    }
    for (int i = 0; i < n.size(); i++){
        if (state > 2){
            resp = false;
            break;
        }
        if (n[i] == '4'){
            state++;
        } else {
            state = 0;
        }
    }
    if (state > 2){
        resp = false;
    }
    if (resp == true){
        cout << "YES" << '\n';
    } else cout << "NO" << '\n';
}
int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string n; cin >> n; solve(n);
}