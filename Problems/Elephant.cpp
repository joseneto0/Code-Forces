//problema 617A
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    if (n <= 5){
        cout << 1 << '\n';
    } else {
        if (n % 5 != 0){
            cout << n / 5 + 1 << '\n';
        } else {
            cout << n / 5 << '\n';
        }
    }
    return 0;
}