#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> palavras(n);
    for (int i = 0; i < n; i++){
        cin >> palavras[i];
    }
    string s = "";
    int aux = 0;
    for (int i = 0; i < m; i++){
        if (s == "vika"){
            break;
        }
        while (aux < n){
            if (palavras[aux][i] == 'v' && s.size()==0){
                s += palavras[aux][i];
                break;
            } else if (palavras[aux][i] == 'i' && s.size()==1){
                s += palavras[aux][i];
                break;
            } else if (palavras[aux][i] == 'k' && s.size()==2){
                s += palavras[aux][i];
                break;
            } else if (palavras[aux][i] == 'a' && s.size() == 3){
                s += palavras[aux][i];
                break;
            }
            aux++;
        }
        aux = 0;
    }
    if (s == "vika"){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}