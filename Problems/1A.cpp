#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, m, a;
    cin >> n >> m >> a;
    cout << ((n+a-1) / a) * ((m+a-1) / a) << "\n";
    return 0;
}