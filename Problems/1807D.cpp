#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,q,aux;
    cin >> n >> q;
    vector<int> A(n);
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (i > 0){
            A[i] = A[i-1] + aux;
        } else {
            A[i] = aux;
        }
    }
    while (q--){
        int l,r,k;
        cin >> l >> r >> k;
        l--; r--;
        int resp = A[r] - A[l-1];
        if (l==0){
            resp = A[r];
        }

        if ((A[n-1] + k*(r-l+1) - resp) % 2 != 0){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while (t--) {solve();}
}