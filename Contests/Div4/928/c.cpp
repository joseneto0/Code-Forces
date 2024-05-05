#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define esac(x) cout << x << "\n"


const int MAX = 2e5+5;
vector<int> valores(MAX);

int calc(int x){
    int cont = 0;
    while (x){
        cont += (x % 10);
        x /= 10;
    }
    return cont;
}

void solve(){
    int n;
    cin >> n;
    esac(valores[n]);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    valores[0] = 0;
    for (int i = 1; i < MAX; i++){
        valores[i] = valores[i-1] + calc(i);
    }
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}