#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, m, aux;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    int ans = 0;
    for (int i = 0; i < m; i++){
        cin >> aux;
        cout << upper_bound(all(a), aux) - a.begin() << " ";
    }
    cout << "\n";
    return 0;
}