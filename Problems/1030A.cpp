#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, aux, cont=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (aux == 1){
            cont++;
        }
    }
    if (cont > 0){
        cout << "HARD" << '\n';
    } else {
        cout << "EASY" << '\n';
    }
}