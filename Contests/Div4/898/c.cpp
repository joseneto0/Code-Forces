#include <bits/stdc++.h>

using namespace std;

void solve(){
    int cont = 0;
    vector<vector<char>> matriz(10, vector<char> (10));
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin >> matriz[i][j];
            if (matriz[i][j] == 'X'){
                if (i == 0 || i == 9 || (i > 0 && j == 0) || (i > 0 && j== 9)){
                    cont++;
                } else if (i == 1 || i == 8 || (i > 1 && j == 1) || (i > 1 && j == 8)){
                    cont += 2;
                } else if (i == 2 || i == 7 || (i > 2 && j == 2) || (i > 2 && j == 7)){
                    cont += 3;
                } else if (i == 3 || i == 6 || (i > 3 && j == 3) || (i > 2 && j == 6)){
                    cont += 4;
                } else if (i == 4 || i == 5 || (i > 4 && j == 4) || (i > 4 && j == 5)){
                    cont += 5;
                }
            }
        }
    }
    cout << cont << '\n';


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}