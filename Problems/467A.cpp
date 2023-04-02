#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, p, q, cont=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> p >> q;
        if (p < q && q - p >= 2){
            cont++;
        }
    }
    cout << cont << '\n';
}