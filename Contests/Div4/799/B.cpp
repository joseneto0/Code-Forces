#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    set<int> A;
    int aux;
    for (int i = 0; i < n; i++){
        cin >> aux;
        A.insert(aux);
    }
    if ((n - A.size()) % 2 == 0){
        cout << A.size() << '\n';
    } else {
        cout << A.size()-1 << '\n';
    }
    
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}