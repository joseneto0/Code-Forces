#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, M, maior;
    cin >> N >> M;
    int matriz[N][M];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cin >> matriz[i][j];
        }
    }
    int somador = 0;
    vector<int> valores;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            somador += matriz[i][j];
        }
        valores.push_back(somador);
        somador = 0;
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            somador += matriz[j][i];
        }
        valores.push_back(somador);
        somador = 0;
    }
    for (int i = 0; i < valores.size(); i++){
        if (i == 0){
            maior = valores[i];
        }
        else if (maior <= valores[i]){
            maior = valores[i];
        }
    }
    cout << maior << '\n';
    return 0;
}