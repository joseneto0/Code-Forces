#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, anton = 0, danik = 0;
    cin >> n;
    string jogos;
    cin >> jogos;
    for (int i = 0; i < n; i++){
        if (jogos[i] == 'A'){
            anton++;
        } else {
            danik++;
        }
    }
    if (anton == danik){
        cout << "Friendship" << '\n';
    } else if (anton > danik){
        cout << "Anton" << '\n';
    } else {
        cout << "Danik" << '\n';
    }
}