#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    if (a[0] != a[1]){
        esac("YES");
        return;
    }
    bool achou = false;
    for (int i = 1; i < n; i++){
        if (a[i] % a[0] != 0){
            achou = true;
            break;
        }
    }
    if (achou){
        esac("YES");
    } else{
        esac("NO");
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