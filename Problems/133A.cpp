#include <bits/stdc++.h>

using namespace std;

int main(void){
    string p;
    cin >> p;
    bool printar = false;
    for (int i = 0; i < p.size(); i++){
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9' || p[i] == '+'){
            printar = true;
            break;
        }
    }
    if (printar == true){
        cout << "YES" <<'\n';
    } else {    
        cout << "NO" << '\n';
    }
}