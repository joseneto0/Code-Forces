#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matriz(n, vector<int> (m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }
    int resp = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0 ; j < m; j++){
            int dig_i = i, dig_j = j;
            int soma = 0;
            while (dig_i >= 0 && dig_j >= 0 && dig_i < n && dig_j < m){
                soma += matriz[dig_i][dig_j];
                dig_i--; dig_j--;
            }
            soma -= matriz[i][j];
            dig_i = i, dig_j = j;
            while (dig_i >= 0 && dig_j >= 0 && dig_i < n && dig_j < m){
                soma += matriz[dig_i][dig_j];
                dig_i--; dig_j++;
            }
            soma -= matriz[i][j];
            dig_i = i, dig_j = j;
            while (dig_i >= 0 && dig_j >= 0 && dig_i < n && dig_j < m){
                soma += matriz[dig_i][dig_j];
                dig_i++; dig_j--;
            }
            soma -= matriz[i][j];
            dig_i = i, dig_j = j;
            while (dig_i >= 0 && dig_j >= 0 && dig_i < n && dig_j < m){
                soma += matriz[dig_i][dig_j];
                dig_i++; dig_j++;
            }
            resp = max(resp, soma);
        }
    }
    cout << resp << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; while (t--){ solve();}
}