#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string resp;
    if (n % 2 != 0){
        resp += '7';
        n -= 3;
    } while(n > 0){
        resp += '1';
        n -= 2;
    }
    cout << resp << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}