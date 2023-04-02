#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, crime, cont=0, contratado = 0;
    cin >> n;
    for (int i =0; i < n; i++){
        cin >> crime;
        if (crime < 0 && contratado == 0){
            cont++;
        } else if (crime > 0){
            contratado+= crime;
        } else if (crime < 0 && contratado > 0){
            contratado--;
        }
    }
    cout << cont << '\n';
}