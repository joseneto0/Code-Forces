#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define esac(x) cout << x << "\n"

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5+2;

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

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            int possivel = 2;
            for (int j = 0; j < i; j++){
                for (int k = j+i; k < n; k += i){
                    if (s[j] != s[k]){
                        possivel--;
                    }
                }
            }
            if (possivel > 0){
                esac(i);
                return;
            }
            possivel = 2;
            for (int j = n-i; j < n; j++){
                for (int k = j-i; k >= 0; k -= i){
                    if (s[j] != s[k]){
                        possivel--;
                    }
                }
            }
            if (possivel > 0){
                esac(i);
                return;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}