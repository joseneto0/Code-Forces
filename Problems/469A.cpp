#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, p, q,aux,cont=0;
    cin >> n;
    vector<int> numeros;
    while (cont < 1){
        cin >> p;
        cont++;
        for (int i = 0; i < p ; i++){
            cin >> aux;
            bool existe = false;
            if (numeros.size() > 0){
                for (int j = 0; j < numeros.size(); j++){
                    if (aux == numeros[j]){
                        existe = true;
                        break;
                    }
                }
                if (existe == false){
                    numeros.push_back(aux);
                }
            } else {
                numeros.push_back(aux);
            }
        }
    }
    cont = 0;
    while (cont < 1){
        cin >> q;
        cont++;
        for (int i = 0; i < q ; i++){
            cin >> aux;
            bool existe = false;
            if (numeros.size() > 0){
                for (int j = 0; j < numeros.size(); j++){
                    if (numeros[j] == aux) {
                        existe = true;
                        break;
                    }
                } 
                if (existe == false){
                    numeros.push_back(aux);
                }
            } else {
                numeros.push_back(aux);
            }
        }
    }
    if (numeros.size() == n){
        cout << "I become the guy." << '\n';
    } else {
        cout << "Oh, my keyboard!" << '\n';
    }
}