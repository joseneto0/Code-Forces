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
	int n, a, b;
	cin >> n >> a >> b;
	int cont = 0;
	while (n > 0){
		if (n == 1){
			cont += a;
			n--;
		}else if (a*2 >= b){
			cont += b;
			n -= 2;
		} else {
			n -= 1;
			cont += a;
		}
	}
	esac(cont);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}