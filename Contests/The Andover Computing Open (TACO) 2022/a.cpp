#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, r, c;
    cin >> n >> r >> c;
    vector<vector<char>> matriz(n, vector<char>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }
    if (matriz[r][c] == 'S') cout << "No" << "\n";
    else cout << "Yes" << "\n";
    return 0;
}