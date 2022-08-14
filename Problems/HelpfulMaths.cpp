//problema 339A
#include <bits/stdc++.h>

using namespace std;

int main(void){
    string s, sN, sF;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++){
        if (isdigit(s[i])){
            sN += s[i];
        }
    }
    int cont = 0;
    for (int i = 1; i <= sN.size() + (sN.size() - 1); i++){
        if (i % 2 == 0){
            sF += '+';
        } else {
            sF += sN[cont];
            cont++;
        }
    }
    cout << sF << '\n';
    return 0;
}