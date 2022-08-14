//problema 34B
#include <bits/stdc++.h>
 
using namespace std;
 
int main(void){
    int n, m, cont = 0;
    cin >> n >> m;
    int v[n];
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v, v+n);
    for (int i = 0; i < n; i++){
        if (v[i] < 0){
            cont += -v[i];
            m--;
        } if (m==0){
            break;
        }
    }
    cout << cont << '\n';
    return 0;
}
