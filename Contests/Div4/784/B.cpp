#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    map<int, int> A;
    int aux;
    int maior = 0;
    for (int i = 0; i <n; i++){
        cin >> aux;
        if (A.find(aux) != A.end()){
            A[aux] += 1;
            if (A[aux] >= 3){
                maior = aux;
            }
        }  else {
            A[aux] = 1;
        }
    }
    if (maior != 0) cout << maior << '\n';
    else cout << -1 << '\n';

}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}