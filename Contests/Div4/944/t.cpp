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

int n, a, b, c;
vector<int> dp;

void solve(){
    f(i, 1, n+1){
        int x = -1, y = -1, z = -1;
        if (i >= a){
            x = dp[i-a];
        }
        if (i >= a){
            y = dp[i-b];
        }
        if (i >= c){
            z = dp[i-c];
        }
        if (x == -1 && y == -1 && z == -1){
            dp[i] = -1;
        } else {
            dp[i] = max(max(x, y), z) + 1;
        }
    }
}

int main(){
    ios;
    cin >> n >> a >> b >> c;
    dp.assign(n+1, 0);
    solve();
    esac(dp[n]);
    return 0;
}