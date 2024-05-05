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

vector<int> valores_possiveis = {10, 11, 101, 111, 1001, 1011, 1101, 10001, 10011, 10101, 10111, 11001, 11011, 11101, 11111};

void solve(){
    int n;
    cin >> n;
    for (int i = len(valores_possiveis)-1; i >= 0; i--){
        while (n % valores_possiveis[i] == 0){
            n /= valores_possiveis[i];
        }
    }
    if (n == 1){
        esac("YES");
    } else {
        esac("NO");
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