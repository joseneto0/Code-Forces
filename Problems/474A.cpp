#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    char pos;
    string palavra;
    cin >> pos;
    cin >> palavra;
    string resposta = "";
    string teclado = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < palavra.size(); i++){
        if (pos == 'R'){
            cout << teclado[teclado.find(palavra[i])-1];
        } else {
            cout << teclado[teclado.find(palavra[i])+1];
        }
    }
    cout << '\n';
}