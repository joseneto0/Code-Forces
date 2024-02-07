#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll floorSqrt(ll n) {
    if (n==0) return 0;
    ll left = 1;
    ll right = n/2 + 1;
    ll res;
    while (left <= right) {
        ll mid = left + ((right-left)/2);
        if (mid<=n/mid){
            left = mid+1;
            res=mid;
        }
        else {
            right=mid-1;
        }
    }

    return res;
}

void solve(){
    ll n, aux, soma = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        soma += aux;
    }
    if ((floorSqrt(soma) * floorSqrt(soma)) == soma) {
        cout << "YES" << "\n";
    }
    else cout << "NO" << "\n";
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}