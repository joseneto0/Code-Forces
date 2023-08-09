#include <bits/stdc++.h>

using namespace std;

void solve(){
    vector<string> matriz(8);
    int qntdR = 0;
    bool vencR = false;
    for (int i = 0; i < 8; i++){
        cin >> matriz[i];
        for (int j = 0; j < 8; j++){
            if (matriz[i][j] == 'R'){
                qntdR++;
            }
        }
        if (qntdR == 8){
            vencR = true;
        }
        qntdR = 0;
    }
    if (vencR == true){
        cout << "R" << '\n';
    } else {
        cout << "B" << '\n';
    }
    
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}