#include <bits/stdc++.h>

using namespace std;

int main(void){
    vector<int> valores;
    int aux, cont=0;
    for (int i = 0; i < 4; i++){
        bool verdadeiro = false;
        cin >> aux;
        if (valores.size() > 0){
            for (int i = 0; i < valores.size(); i++){
                if (valores[i] == aux){
                    cont ++;
                    verdadeiro = true;
                    break;
                }
            } if (verdadeiro == false){
                valores.push_back(aux);
            }
        } else {
            valores.push_back(aux);
        }
    }
    cout << cont << '\n';
}