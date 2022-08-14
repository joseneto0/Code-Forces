//problema 158A
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k, cont = 0;
    cin >> n >> k;
    vector<int> valores(n);
    for (int i = 0; i < n; i++){
        cin >> valores[i];
    }
    for (int i = 0; i < n; i++){
        if (valores[i] >= valores[k-1] && valores[i] > 0){
            cont++;
        }
    }
    cout << cont << '\n';
    return 0;
}