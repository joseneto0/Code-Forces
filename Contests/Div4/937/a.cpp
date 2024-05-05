#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define esac(x) cout << x << "\n"

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c){
        esac("STAIR");
    } else if (a < b && b > c){
        esac("PEAK");
    } else {
        esac("NONE");
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