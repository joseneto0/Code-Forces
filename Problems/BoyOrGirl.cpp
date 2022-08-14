//problema 236A
#include <bits/stdc++.h>

using namespace std;

int main(void){
    string n;
    int cont=0;
    cin >> n;
    for (int i =0; i<n.size(); i++){
        if (n.find(n[i]) != i){
            cont++;
        }
    }
    if ((n.size() - cont) % 2 == 0){
        cout << "CHAT WITH HER!" << '\n';
    } else {
        cout << "IGNORE HIM!" << '\n';
    }
    return 0;
}