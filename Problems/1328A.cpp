#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t, a, b, cont =0;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> a >> b;
        if (a < b){
            cout << b - a << '\n';
        } else if (a % b == 0) {
            cout << 0 << '\n';
        } else {
            cout << b - a % b << '\n';
        }
    }
}