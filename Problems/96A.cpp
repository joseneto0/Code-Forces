#include <bits/stdc++.h>

using namespace std;

int main(void){
    int cont0 = 0, cont1 = 0;
    string n;
    bool perigosa = false;
    cin >> n;
    for (int i = 0; i < n.size(); i++){
        if (cont1 == 7 || cont0 == 7){
            perigosa = true;
            break;
        }
        if (n[i] == '1'){
            cont1++;
            cont0=0;
        } else {
            cont1=0;
            cont0++;
        }
    }
    if (cont1 == 7 || cont0 == 7){
            perigosa = true;
        }
    if (perigosa == true){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}