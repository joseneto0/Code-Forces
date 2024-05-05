#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define esac(x) cout << x << "\n"

void solve(){
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < len(s); i++){
        if (s[i] == 'A'){
            a++;
        } else {
            b++;
        }
    }
    if (a > b) {
        esac("A");
    } else {
        esac("B");
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