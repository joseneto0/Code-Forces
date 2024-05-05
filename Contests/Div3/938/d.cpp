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

int segmentos(int n, int m, int k, vector<int>&a, vector<int>& b){
    
}
void solve(){
	int n,m,k; 
    cin>>n>>m>>k; 
    map<int,int>mp,mp2; 
    vector<int>a(n),b(m); 
    for (int i = 0; i <n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int x:b){ 
        mp[x]++; 
    } 
    int atual=0, ans=0; 
    for(int i=0; i < m; i++){ 
        mp2[a[i]]++; 
    } 
    for(auto i:mp){ 
        int v = i.first; 
        if(mp2.find(v)!=mp2.end()){ 
            atual+=min(mp[v],mp2[v]); 
        } 
    } 
    if(atual>=k){ 
        ans++; 
    } 
    if(n == m){ 
        esac(ans); 
        return; 
    } 
    for(int i=0; i < n-m; i++){ 
        if(a[i] != a[i+m]){ 
            atual-=min(mp[a[i]],mp2[a[i]]); 
            atual-=min(mp[a[i+m]],mp2[a[i+m]]); 
            mp2[a[i]]--; 
            mp2[a[i+m]]++; 
            atual+=min(mp[a[i]],mp2[a[i]]); 
            atual+=min(mp[a[i+m]],mp2[a[i+m]]); 
        } 
        if(atual>=k){ 
            ans++; 
        } 
    } 
    esac(ans);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}