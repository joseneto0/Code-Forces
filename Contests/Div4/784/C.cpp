#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> A(n);
    int todosPares = 0, todosImpares = 0;
    for (int i = 0; i < n; i++){
        cin >> A[i];
        if (A[i] % 2 == 0){
            todosPares++;
        } else {
            todosImpares++;
        }
    }
    if (todosImpares == n || todosPares == n){
        cout << "YES" << '\n';
    } else {
        bool paresPar = false, imparesPar = false, paresImpar = false, imparesImpar = false;
        for (int i = 0; i < n; i++){
            if (i % 2 == 0){
                if (A[i] % 2 == 0){
                    paresPar = true;
                } else {
                    imparesPar = true;
                }
            } else {
                if (A[i] % 2 == 0){
                    paresImpar = true;
                } else {
                    imparesImpar = true;
                }
            }
        }  
        if (paresPar && imparesPar) {
            cout << "NO" << '\n';
        } else if (paresImpar && imparesImpar){
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    
    } 
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){ solve();}
}