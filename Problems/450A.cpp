#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, m, aux;
    cin >> n >> m;
    queue<pair<int, int>> fila;
    for (int i = 0; i < n; i++){
        cin >> aux;
        fila.push({aux, i+1});
    }
    while (!fila.empty()){
        if (fila.size() == 1) {
            cout << fila.front().second << '\n'; 
            break;
        }
        if (fila.front().first <= m){
            fila.pop();
        } else {
            fila.push({fila.front().first - m, fila.front().second});
            fila.pop();
        }
        
    }
    

}