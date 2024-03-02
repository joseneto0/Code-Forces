#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve(){
    int n;
    cin >> n;
    string atual = "", menor = "zzz";
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < 26; j++){
            for(int k = 0; k < 26; k++){
                if(i + j + k + 3 == n){
                    atual += char(i + 'a');
                    atual += char(j + 'a');
                    atual += char(k + 'a');
                    menor = min(atual, menor);
                }
            }
        }
    }
    cout << menor << "\n";
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}