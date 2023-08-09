#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while (t--){
        int n, state=0;
        string nome;
        bool incompleta = false;
        bool completa = false;
        cin >> n;
        cin >> nome;
        if ((nome[0] == 'm' || nome[0] == 'M') && (nome[n-1] == 'W' || nome[n-1] == 'w') && (nome[n-2] != 'w' || nome[n-2] != 'W')){
            for (int i = 0; i < n; i++){
                nome[i] = tolower(nome[i]);
                if ((state == 0 && nome[i] == 'm') || (state == 1 && nome[i] == 'e') || (state == 2 && nome[i] == 'o')){
                    state++;
                } else if (state == 1 && nome[i] == 'm'){
                    state=1;
                } else if (state == 2 && nome[i] == 'e'){
                    state=2;
                } else if (state == 3 && nome[i] == 'o' && completa == false){
                    state = 3;
                } else if (state == 3 && nome[i] == 'w'){
                    state = 3;
                    completa = true;
                } else if ((state == 0 && nome[i] != 'm') || (state == 1 && nome[i] != 'm' || nome[i] != 'e') || (state == 2 && nome[i] != 'e' || nome[i] != 'o') || (state == 3 && nome[i] != 'o' || nome[i] != 'w')){
                    state=0;
                    break;
                }
            }
            if (state == 3 && completa == true){
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            } 
        } else {
            cout << "NO" << '\n';
        }
    }
}