#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> pos(4, 0);
    for (int i = 0; i < n; i++){
        if (s[i] == '0'){
            pos[2]++;
        } else {
            pos[3]++;
        }
    }
    int ans = -1, cont = INT_MAX;
    if ((n/2) + (n % 2) <= pos[3]){
        cont = n;
        ans=0;
    }
    for (int i = 0; i < n; i++){
        if (s[i] == '0'){
            pos[2]--;
            pos[0]++;
        } else {
            pos[3]--;
            pos[1]++;
        }
        int l = pos[0] + pos[1];
        int r = pos[2] + pos[3];
        if (l/2 + l%2 <= pos[0] && r/2 + r % 2 <= pos[3]){
            if (abs(l - r) < cont){
                cont = abs(l-r);
                ans = i + 1;
            }
        }
    }
    esac(ans);
}

int main(){
    ios;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}