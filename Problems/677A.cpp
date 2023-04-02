#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, h, aux, cont=0;
    cin >> n >> h;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (aux > h) {
            cont += 2;
        } else {
            cont ++;
        }
    }
    cout << cont << '\n';
}