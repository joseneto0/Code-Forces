#include <bits/stdc++.h>

using namespace std;

int main(void){
    int N, S, K;
    cin >> N >> S >> K;
    vector<int> v(N);
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }
    int cont = 0;
    for (int i = 0; i <= v.size(); i++){
        if (cont == K){
            S++;
            cont = 0;
        }
        if (v[i] != 0){
            S -= v[i];
            cont = 0;
        } else {
            cont += 1;
        }
    }
    cout << S << '\n';
}