#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define len(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";
#define ios ios_base::sync_with_stdio;cin.tie(0);cout.tie(0)

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

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

void solve(){
	int n, c, d;
	cin >> n >> c >> d;
	vector<ll> a(n*n);
	for (int i = 0; i < n*n; i++){
		cin >> a[i];
	}
	ll menor = *min_element(all(a));
	map<ll, ll> mp;
	for (auto x: a){
		mp[x]++;
	}
	vector<vector<ll>> matriz(n, vector<ll>(n, 0));
	matriz[0][0] = menor;
	for (int i = 0; i < n; i++){
		if (i != 0){
			matriz[i][0] = matriz[i-1][0] + c;
		}
		for (int j = 0; j < n; j++){
			if (j != 0){
				matriz[i][j] = matriz[i][j-1] + d;
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (mp.find(matriz[i][j]) == mp.end()){
				esac("NO");
				return;
			} else {
				mp[matriz[i][j]]--;
				if (mp[matriz[i][j]] == 0){
					mp.erase(matriz[i][j]);
				}
			}
		}
	}
	esac("YES");
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}