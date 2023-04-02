#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0 && i < n){
            cout << "I hate that" << ' ';
        } else if (i % 2 != 0 && i == n) {
            cout << "I hate it" << '\n';
        } else if (i % 2 == 0 && i < n) {
            cout << "I love that" << ' ';
        } else {
            cout << "I love it" << '\n';
        }
    }
}