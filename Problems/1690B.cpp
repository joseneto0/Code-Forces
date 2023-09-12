#include <bits/stdc++.h>

using namespace std;

#define ll long long int

void solve(){
    int n;
    cin >> n;
    vector<int> vetor1(n);
    vector<int> vetor2(n);
    for (int i = 0; i < n ; i++){
        cin >> vetor1[i];
    }
    int maior = 0;
    for (int i = 0; i < n ; i++){
        cin >> vetor2[i];
        vetor1[i] -= vetor2[i];
        maior = max(maior, vetor1[i]);
    }
    for (int i = 0; i < n; i++){
        if (vetor1[i] < maior && vetor2[i] > 0){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n'; 
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t; cin >> t; while(t--) {solve();}
}