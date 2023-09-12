#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e3+10;

void solve(){
    int n, d, s, cont=0;
    cin >> n;
    vector<int> salas(MAX, -1);
    for (int i = 1; i <= n; i++){
        cin >> d >> s;
        if (s % 2 != 0) s++;
        salas[(d-1) + (s/2)] = 1;
    }
    for (int i = 1; i <= MAX; i++){
        if (salas[i] == 1){
            cout << i << '\n';
            break;
        } 
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--) { solve(); }
}