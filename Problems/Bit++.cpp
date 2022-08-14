//problema 282A
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, x=0;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < v[i].size(); j++){
            if (v[i][j] == '+'){
                x++;
                break;
            } else if (v[i][j] == '-'){
                x--;
                break;
            }
        }
    }
    cout << x << '\n';
}