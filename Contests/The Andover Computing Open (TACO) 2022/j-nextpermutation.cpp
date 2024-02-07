#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> grpA(n), grpB(n);
    for (int i = 0; i < n; i++){
        cin >> grpA[i];
    }
    for (int i = 0; i < n; i++){
        cin >> grpB[i];
    }
    vector<int> perm(n, 0);
    perm[n-1] = 2; perm[n-2] = 1;
    ll maior = 0;
    do {
        ll soma = 0;
        int qntd = 0;
        for (int i = 0; i < n; i++){
            if (perm[i] == 2){
                soma += grpA[i];
                qntd++;
            } else if (perm[i] == 1){
                soma += grpB[i];
                qntd++;
            }
            if (qntd == 2){
                break;
            }
            
        }
        maior = max(soma, maior);
    } while (next_permutation(perm.begin(), perm.end()));
    cout << maior << "\n";
    return 0;
}