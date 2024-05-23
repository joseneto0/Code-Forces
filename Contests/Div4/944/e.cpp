#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define len(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";
#define ios ios_base::sync_with_stdio;cin.tie(0);cout.tie(0)
#define f(i, s, t) for(int i = s; i < t; ++i)

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1001000;

#ifdef EBUG
	#include "bug.hpp"
#else
	#define bug(x) { ; }
	#define bug2(x,y) { ; }
	#define bug3(x,y,z) { ; }
	#define bugV(V) { ; }
	#define bugP(V) { ; }
	#define bugL() { ; }
#endif

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

ll n, k, q, l, r, d;
vector<ll> a, b;

void busca_bin(){
    l = 0, r = k;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] <= d){
            l = m + 1; 
        } else {
            r = m - 1;
        }
    }
}

void solve(){
    cin >> n >> k >> q;
    a.assign(k+1, 0);
    b.assign(k+1, 0);
    f(i, 1, k+1){
        cin >> a[i];
    }
    f(i, 1, k+1){
        cin >> b[i];
    }
    f(i, 0, q){
        cin >> d;
        busca_bin();
        if (a[r] == d){
            cout << b[r] << " ";
        } else {
            ll ans = b[r] + (d - a[r]) * (b[r+1] - b[r]) / (a[r+1] - a[r]);
            cout << ans << " ";
        }
    }
    cout << "\n";
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