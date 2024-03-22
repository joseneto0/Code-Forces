#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

const int MAXN = 100005;

using namespace std;

void solve(){
    int n, aux, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (aux < 0) aux *= -1;
        ans += aux;
    }
    esac(ans);
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