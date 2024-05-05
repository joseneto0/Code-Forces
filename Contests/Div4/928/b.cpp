#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define esac(x) cout << x << "\n"

void solve(){
    int n;
    cin >> n;
    vector<vector<char>> m(n, vector<char>(n, 0));
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        for (int j = 0; j < n; j++){
            m[i][j] = s[j];
        }
    }
    int cont = 0;
    bool triangulo = false;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (m[i][j] == '1'){
                cont++;
            }
        }
        if (cont == 1){
            triangulo = true;
            break;
        }
        cont = 0;
    }
    if (triangulo){
        esac("TRIANGLE");
    } else {
        esac("SQUARE");
    }
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