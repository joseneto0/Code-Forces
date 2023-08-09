#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0 ; i < n; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    int soma = 0, cont=0;
    for (int i = n-1; i >= 0; i--){
        if (soma > accumulate(A.begin(), A.end(), 0)){
            break;
        }
        soma += A[i];
        cont++;
        A.pop_back();
    }
    cout << cont << '\n';
}