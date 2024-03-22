#include <bits/stdc++.h>

#define ll long long int
#define all(x) x.begin(), x.end()
#define esac(x) cout << x << "\n";

using namespace std;

void solve(){
    int n, m, x, aux;
    char c;
    cin >> n >> m >> x;
    vector<int> memo(n);
    memo[x-1] = 1;
    for (int i = 0; i < m; i++){
        cin >> aux >> c;
        vector<int> atual(n);
        if (c == '0'){
            for (int j = 0; j < n; j++){
                if (memo[j]){
                    atual[(j + aux) % n] = 1;
                }
            }
        } else if (c == '1'){
             for (int j = 0; j < n; j++){
                if (memo[j]){
                    atual[(j - aux + n) % n] = 1;
                }
            }
        } else {
            for (int j = 0; j < n; j++){
                if (memo[j]){
                    atual[(j + aux) % n] = 1;
                    atual[(j - aux + n) % n] = 1;
                }
            }
        }
        swap(memo, atual);
    }
    vector<int> ans;
    for (int i = 0; i < n; i++){
        if (memo[i]){
            ans.push_back(i);
        }
    }
    esac(ans.size());
    for (int i : ans){
        cout << i+1 << " ";
    }
    cout << "\n";
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
