#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, h, v, cont=0;
    cin >> n >> h;
    for (int i = 0; i < n; i++){
        cin >> v;
        if (h >= v){
            cont++;
        }
    }
    cout << cont << '\n';

}