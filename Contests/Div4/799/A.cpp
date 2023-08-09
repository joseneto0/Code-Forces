#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c,d ;
    cin >> a >> b >> c >> d;
    int cont=0;
    if (b > a) cont++;
    if (c > a)cont++;
    if (d>a)cont++;
    cout << cont << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}