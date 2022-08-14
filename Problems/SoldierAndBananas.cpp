//problema 546A
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int k, n, w, cont=0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++){
        cont += (k * i);
    }
    if (cont < n){
        cout << 0 << '\n';
    } else {
        cout << abs(n - cont) << '\n';
    }
    return 0;
}