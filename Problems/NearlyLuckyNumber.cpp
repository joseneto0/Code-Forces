//110A
#include <bits/stdc++.h>

using namespace std;

int main(void){
    string n;
    cin >> n;
    int numerosSorte=0;
    for (int i = 0; i < n.size(); i++){
        if (n[i] == '4' || n[i] == '7'){
            numerosSorte++;
        }
    }
    if (numerosSorte == 0){
        cout << "NO" << '\n';
    } else if (numerosSorte == 4 || numerosSorte == 7){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}