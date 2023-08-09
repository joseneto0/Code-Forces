#include <bits/stdc++.h>

using namespace std;

void solve(){
    int l, r,a, c1, c2;
    cin >> l >> r >> a;
    c1 = r / a + r % a;
    c2 = r / a * a - 1;
    if (c2 >= l){
        c1 = max(c1, c2 / a + c2 % a);
    }
    cout << c1 << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}