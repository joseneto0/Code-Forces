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
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> x;
    for (auto i: s){
        x.insert(i);
    }
    string ns = "";
    for (auto i: x){
        ns += i;
    }
    map<char, char> mp;
    f(i, 0, len(ns)){
        mp[ns[i]] = ns[len(ns) - i - 1];
    }
    f(i, 0, n){
        cout << mp[s[i]];
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