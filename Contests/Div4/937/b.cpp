#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define esac(x) cout << x << "\n"

void solve(){
    int n;
    cin >> n;
    int contI = 0, contJ = 0;
    char s = '#';
    for (int i = 0; i < 2*n; i++){
        for (int j = 0; j < 2*n; j++){
            if ((i/2 + j/2) % 2 == 0){
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << "\n";
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