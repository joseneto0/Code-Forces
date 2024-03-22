#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 1; i < n-1; i++){
        if (a[i-1] > 0){
            int ant = a[i-1];
            a[i-1] = 0;
            a[i] -= 2 * ant;
            a[i+1] -= ant;
        }
        
    }
    for (int i: a){
        if (i != 0){
            esac("NO");
            return;
        }
    }
    esac("YES");
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
