#include <bits/stdc++.h>

using namespace std;

void solve(){
    int qntdA = 0, qntdB = 0, qntdC = 0;
    vector<vector<char>> matriz(3, vector<char>(3));
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matriz[i][j];
            if (matriz[i][j] == 'A') qntdA++;
            else if (matriz[i][j] == 'B') qntdB++;
            else if (matriz[i][j] == 'C') qntdC++;
        }
    }
    int menor;
    if (qntdA < qntdB && qntdA < qntdC){
        menor = qntdA;
    }
    else if (qntdB < qntdA && qntdB < qntdC){
        menor = qntdB;
    } 
    else if (qntdC < qntdA && qntdC < qntdB) menor = qntdC;
    if (menor == qntdA){
        cout << 'A' << "\n";
    } else if (menor == qntdB){
        cout << 'B' << "\n";
    } else {
        cout << 'C' << "\n";
    }
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