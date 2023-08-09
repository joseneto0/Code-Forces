#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string aux;
    map<string, int> A;
    vector<vector<string>> valores(3);
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < n; j++){
            cin >> aux;
            valores[i].push_back(aux);
            if (i == 0){
                A[aux] = 1;
            } else {
                if (A.find(aux) != A.end()){
                    A[aux] += 1;
                } else {
                    A[aux] = 1;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++){
        int pontuacao = 0;
        for (int j = 0; j < valores[i].size(); j++){
            if (A[valores[i][j]] == 1){
                pontuacao += 3;
            } else if (A[valores[i][j]] == 2){
                pontuacao++;
            } 
        }
        cout << pontuacao << ' ';
    }
    cout << '\n';
    
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}