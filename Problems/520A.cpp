#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    string aux;
    cin >> aux;
    set<char> resposta;
    for (int i = 0; i < n; i++){
        resposta.insert(tolower(aux[i]));
    }
    if (resposta.size() == 26){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }


}