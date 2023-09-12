#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, f, a, b;
    cin >> n >> f;
    int cont = 0;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (a <= f && b <= f){
            f += max(a, b);
            cont++;
        } else if (a <= f){
            f += a;
            cont++;
        } else if (b <= f) {
            f += b;
            cont++;
        } 
    }
    if (cont == n){
        cout << "S" << '\n';
    } else {
        cout << "N" << '\n';
    }
}