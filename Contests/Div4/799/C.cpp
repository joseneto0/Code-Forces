#include <bits/stdc++.h>

using namespace std;

void solve(){
    char A[8][8];
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            cin >> A[i][j];
           
        }
    }
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if (A[i][j] == '#'){
                if (A[i-1][j-1] == '#' && A[i-1][j+1] == '#' && A[i+1][j-1] == '#' && A[i+1][j+1] == '#'){
                    cout << i+1 << ' ' << j+1 << '\n';
                }
            }

        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}