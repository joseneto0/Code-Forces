#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    ll ans = LINF, cont = 0;
    for (int i = n-1; i >= 0; i--){
        if (i+1 <= m){
            ans = min(ans, cont+a[i]);
        }
        cont += min(a[i], b[i]);
    }
    esac(ans);
}

int main(){
    ios;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}