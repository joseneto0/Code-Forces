#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'm'){
            if (i + 2 < n){
                if (s[i+1] == 'a' && s[i+2] == 'p'){
                    ans++;
                    if (i + 3 < n){
                        if (s[i+3] == 'i'){
                            s[i+2] = 'x';
                        }
                        continue;
                    }
                    if (i-1 > 0){
                        if (s[i-1] == 'm'){
                            s[i+1] = 'x';
                        }
                        continue;
                    }
                }
            }
        } else if (s[i] == 'p'){
            if (i+2 < n){
                if (s[i+1] == 'i' && s[i+2] == 'e'){
                    ans++;
                    if (i-1 > 0){
                        if (s[i-1] == 'p'){
                            s[i+1] = 'x';
                        }
                    }
                }
            }
        }
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
