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
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	bool primeiro = true;
	int i = 0, j = n-1;
	int cont = 0;
	while (k > 0){
		if (cont == n || i > j) break;
		if (primeiro){
			primeiro = false;
			if (a[i] > 0){
				a[i]--;
			} else {
				cont++;
				i++;
				a[i]--;
			}
		} else {
			primeiro = true;
			if (a[j] > 0){
				a[j]--;
			} else {
				cont++;
				j--;
				a[j]--;
			}
		}
		k--;
	}
	int ans = 0;
	for (int i = 0; i < n; i++){
		if (a[i] <= 0) ans++;
	}
	bugV(a);
	esac(ans);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}