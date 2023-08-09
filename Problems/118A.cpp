#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string s;
    cin >> s;
    string resp = "";
    for (int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i'&& s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            resp += '.';
            resp += s[i];
        }
    }
    cout << resp << '\n';
}