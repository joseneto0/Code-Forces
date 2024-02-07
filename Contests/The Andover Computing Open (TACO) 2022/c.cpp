#include <bits/stdc++.h>

using namespace std;

#define forcin for (int i = 0; i < n; i++) { cin >> a[i]; }

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    forcin;
    int cont = 0;
    vector<int> perm(n, 0);
    perm[n-1] = 1;
    perm[n-2] = 1;
    vector<int> v;
    do {
        int valor, qntd = 0, pos1;
        for (int i = 0; i < n; i++){
            if (perm[i] == 1){
                v.push_back(a[i]);
            } 
            
        }
        if (v[1] % v[0] == 0){
            cont++;
        }
        v.clear();
    } while (next_permutation(perm.begin(), perm.end()));
    cout << cont << "\n";
    return 0;
}