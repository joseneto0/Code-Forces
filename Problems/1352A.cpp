#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e3+10;

void solve(){
    int n;
    cin >> n;
    vector<int> val;
    int mult = 1;
    while (n > 0){
        if (n % 10 > 0){
            val.push_back((n%10) * mult);
        }
        mult *= 10;
        n /= 10;
    }
    cout << val.size() << '\n';
    for (auto i: val){
        cout << i << ' ';
    }
    cout << '\n';

}

int main(){
    int t; cin >> t; while(t--) { solve(); }
    return 0;
}