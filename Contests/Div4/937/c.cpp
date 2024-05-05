#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define esac(x) cout << x << "\n"

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


void solve(){
    int h, m;
    char aux;
    cin >> h >> aux >> m;
    string p;
    if (h < 12){
        p = "AM";
    } else {
        p = "PM";
    }
    if (h == 0) h = 12;
    if (h < 10){
        if (m < 10){
            cout << "0" << h << ":" << "0" << m << " " << p << "\n";
        } else {
            cout << "0" << h << ":" << m << " " << p << "\n";
        }
    } else {
        if (h < 13){
            if (m < 10){
                cout << h << ":" << "0" << m << " " << p << "\n";
            } else {
                cout << h << ":" << m << " " << p << "\n";
            }
        } else {
            if (h < 22){
                if (m < 10){
                    cout << "0" << h-12 << ":" << "0" << m << " " << p << "\n";
                } else {
                    cout << "0" << h-12 << ":" << m << " " << p << "\n";
                }
            } else {
                if (m < 10){
                    cout << h-12 << ":" << "0" << m << " " << p << "\n";
                } else {
                    cout << h-12 << ":" << m << " " << p << "\n";
                }
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