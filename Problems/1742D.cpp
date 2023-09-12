#include <bits/stdc++.h>

using namespace std;

int gcd(int a , int b){
    if(b==0){
        return a;
    }
    a%=b;
    return gcd(b,a);
}

void solve(){
    int n, a;
    cin >> n;
    vector<int> indices(1001, -1);
    for (int i = 1; i <= n; i++){
        cin >> a;
        indices[a] = i;
    }
    int maior = -1;
    for (int i = 1; i < 1001; i++){
        if (indices[i] == -1){
            continue;
        }
        for (int j = i; j < 1001; j++){
            if (indices[j] == -1){
                continue;
            } else {
                if (gcd(i, j) == 1){
                    maior = max(maior, indices[i] + indices[j]);
                }
            }
        }
    }   
    cout << maior << '\n';
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; while(t--) { solve(); }
}