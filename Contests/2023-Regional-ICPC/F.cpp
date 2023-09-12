#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int d, c, r, cont=0;
    cin >> d >> c >> r;
    vector<int> cansativa(c);
    vector<int> revigorante(r);
    for (int i = 0; i < c; i++){
        cin >> cansativa[i];
        
    }
    for (int i = 0; i < r; i++){
        cin >> revigorante[i];
    }
    d += accumulate(revigorante.begin(), revigorante.end(), 0);
    for (int i = 0; i < c; i++){
        if (d - cansativa[i] >= 0){
            d -= cansativa[i];
            cont++;
        } else {
            break;
        }
    }
    cout << cont + r << '\n';
    return 0;
}