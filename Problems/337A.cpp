#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> F(m);
    for (int i = 0; i < m; i++){
        cin >> F[i];
    }
    sort(F.begin(), F.end());
    int menor_valor = F[n-1] - F[0];
    for (int i = 1; i <= m-n; i++){
        if (F[i+n-1] - F[i] < menor_valor){
            menor_valor = F[i+n-1] - F[i];
        }
    }
    cout << menor_valor << '\n';
}