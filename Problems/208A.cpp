#include <bits/stdc++.h>

using namespace std;

int main(void){
    string palavra, palavraFinal = "";
    bool fimPalavra = false;
    cin >> palavra;
    for (int i = 0; i < palavra.length(); i++){
        if (palavra[i] == 'W' && palavra[i+1] == 'U' && palavra[i+2] == 'B'){
            i += 2;
            if (fimPalavra == true){
                palavraFinal += ' ';
            }
        } else {
            fimPalavra = true;
            palavraFinal += palavra[i];
        }
    }
    cout << palavraFinal << '\n';
}