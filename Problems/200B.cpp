#include <bits/stdc++.h>

using namespace std;

int main(void){
    double n, aux, cont;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        cin >> aux;
        cont += aux;
    }
    cout << cont / n << '\n';
}