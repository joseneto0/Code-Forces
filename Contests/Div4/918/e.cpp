#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int n;

void findEqualSums(vector<ll> &a) {
    unordered_map<ll, int> prefixSum;
    ll sum = 0;
    prefixSum[0] = -1;
    for (int i = 0; i < n; i++) {
        sum += (i % 2 == 0) ? a[i] : -a[i];
        if (prefixSum.count(sum)) {
            if (i - prefixSum[sum] > 1) {
                cout << "YES" << "\n";
                return;
            }
        } else {
            prefixSum[sum] = i;
        }
    }
    cout << "NO" << "\n";
}

void solve(){
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i< n; i++){
        cin >> a[i];
    }
    findEqualSums(a);
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