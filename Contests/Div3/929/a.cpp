#include <bits/stdc++.h>

#define ll long long int
#define esac(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()

using namespace std;

void solve(){
    int n, aux, soma = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> aux;
        if (aux < 0){
            aux *= -1;
        }
        soma += aux;
    }
    esac(soma);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}