#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;



int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0, soma = 0, j = 0;
    for (int i = 0; i < n; i++){
        while (j < n && soma + a[j] <= t){
            soma += a[j];
            j++;
        }
        ans = max(ans, j - i);
        soma -= a[i];
    }
    cout << ans << "\n";
    return 0;
}