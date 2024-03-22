#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()

using namespace std;

void solve(){
    int n, soma = 0;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        soma += a[i];
        mp[a[i]%3]++;
    }
    if (soma % 3 == 0){
        esac(0);
    } else if (soma % 3 == 2 || soma % 3 == 1 && mp[1]){
        esac(1);
    } else {
        esac(2);
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}