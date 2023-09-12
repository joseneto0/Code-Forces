#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,cont;
    cin >> n;
    if (n % 3 != 0){
        cont = 1;
    } else {
        cont = 0;
    }
    cout << n / 3 + cont << '\n';
}