#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, m,cont=0;
    cin >> n >> m;
    string s1 = "", s2 = "";
    for (int i = 0; i < m-1; i++){
        s1 += '.';
        s2 += '#';
    }
    s2 += '#';
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            cout << s2 << '\n';
            cont++;
        } else if (i % 2 != 0 && cont % 2 != 0){
            cout << s1 + '#' << '\n';
        } else if (i % 2 != 0 && cont % 2 == 0) {
            cout << '#' + s1 << '\n';
        }
    }
}