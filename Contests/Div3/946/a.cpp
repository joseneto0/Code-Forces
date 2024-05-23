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

void solve(){
    int x, y;
    cin >> x >> y;
    int ans = 0, soma = 0, qntdy=0;
    bool ny = false;
    if (y == 0) ny = true;
    while (x > 0 || y > 0){
        if (qntdy < 2 && y > 0){
            qntdy++;
            y--;
        } else {
            if (y == 0){
                ny = true;
            }
            if (ny){
                if (qntdy < 15){
                    qntdy++;
                    x--;
                } else {
                    ans++;
                    qntdy = 0;
                }
            } else {
                if (qntdy < 9 && x > 0){
                    qntdy++;
                    x--;
                } else {
                    ans++;
                    qntdy = 0;
                }
            }
        }
    }
    if (qntdy > 0){
        ans++;
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