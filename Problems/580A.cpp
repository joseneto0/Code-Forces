#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, cont=0, maior=0;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < n; i++){
        if (A[i] <= A[i+1] && i != n-1){
            cont++;
        } else  {
            cont++;
            maior = max(maior,cont);
            cont = 0;
        }
    }
    cout << maior << '\n';
    
}