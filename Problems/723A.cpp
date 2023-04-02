#include <bits/stdc++.h>

using namespace std;

int main(void){
    vector<int> valores;
    int aux;
    for (int i = 0; i < 3; i++){
        cin >> aux;
        valores.push_back(aux);
    }
    sort(valores.begin(), valores.end());
    cout << (valores[1] - valores[0]) + (valores[2] - valores[1]) << '\n';
}