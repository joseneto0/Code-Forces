#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int k, cont=0, soma=0;
    vector<int> A(12, -1);
    cin >> k;
    for (int i = 0; i < 12; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());
    for (int i = 0; i < 12; i++){
        if (soma < k){
            soma += A[i];
            cont++;
        } else {
            break;
        }
    }
    if (soma < k){
        cout << -1 << '\n';
    } else cout << cont << '\n';

}