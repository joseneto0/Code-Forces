#include <bits/stdc++.h>

using namespace std;

int main(void){

    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        long long n;
        cin >> n;
        if (n <= 6){
            cout << 15 << '\n';
        } else cout << max(6LL, n+1) / 2 * 5 << '\n';
    }
}