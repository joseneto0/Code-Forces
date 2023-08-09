#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin >> n >> m;
    if (min(m,n) % 2 == 0){
        cout << "Malvika" << '\n';
    } else {
        cout << "Akshat" << '\n';
    }
}