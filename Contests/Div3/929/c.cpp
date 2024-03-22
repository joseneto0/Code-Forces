#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()

using namespace std;



vector<ll> divisores(ll n){
    vector<ll> divs;
    for (ll i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            if (n / i == i){
                divs.push_back(i);
            } else {
                divs.push_back(i);
                divs.push_back(n/i);
            }
        }
    }
    return divs;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--){    
        ll a, b, l, cmp, ans = 0;
        cin >> a >> b >> l;
        vector<ll> divs = divisores(l), x, y;
        for (ll i = 0; i <= 20; i++){
            cmp = pow(a, i);
            if (cmp <= 1e6){
                x.push_back(cmp);
            } else {
                break;
            }
        }
        for (ll i = 0; i <= 20; i++){
            cmp = pow(b, i);
            if (cmp <= 1e6){
                y.push_back(cmp);
            } else {
                break;
            }
        }
        for (ll i = 0; i < (ll)divs.size(); i++){
            int achou = 0;
            for (ll j = 0; j < (ll)x.size(); j++){
                for (ll k = 0; k < (ll)y.size(); k++){
                    if (divs[i] * x[j] * y[k] == l){
                        ans++;
                        achou = 1;
                        break;
                    }
                }
                if (achou == 1) {
                    break;
                }
            }
        }
        esac(ans);
    }
    return 0;
}