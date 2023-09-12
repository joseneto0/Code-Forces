#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e3+10;

void solve(){
    int l, r, n1, n2;
    cin >> l >> r;
    if (r % 2 != 0){
        n2 = r / 2 + 1;
        n1 = r / 2;
    } else {
        n2 = r / 2;
        n1 = r / 2;
    }
    int resp=1;
    bool a = false;
    while (true){
        resp = __gcd(n1, n2);
        if (resp != 1 && n1 > 0 && n1 + n2 <= r){
            cout << n1 << " " << n2 << '\n';
            break;
        }
        if ((n1 <= 0 || n2 > r) && !a){
            if (l % 2 != 0){
                l++;
            }
            n2 = l / 2;
            n1 = l / 2;
            a = true;
            continue;
        } 
        if (a){
            if (n1 <= 0 || n1 + n2 > r){
                cout << -1 << '\n';
                break;
            }
        }

        n1 -= 10;
        n2 += 10;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--) { solve(); }
    return 0;
}