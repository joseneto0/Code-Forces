#include <bits/stdc++.h>

using namespace std;

bool ePalindromo(string s){
    string aux = s;
    reverse(aux.begin(), aux.end());
    if (s == aux) return true;
    else return false;
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string s;
    cin >> s;
    if (ePalindromo(s)){
        bool nao;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'A' || s[i] == 'H' || s[i] == 'I' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'O' || s[i] == 'U' || s[i] == 'M' || s[i] == 'T' || s[i] == 'V' || s[i] == 'W'){
                nao = true;
            } else {
                nao = false;
                break;
            }
        }
        if (nao) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    } else cout << "NO" << '\n';
}