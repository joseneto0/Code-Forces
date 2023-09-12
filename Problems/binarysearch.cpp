#include <bits/stdc++.h>

using namespace std;

#define ll long long int;

string busca_binaria(vector<int> &N, int aux, int tam){
    int inicio = 0, fim = tam-1;
    while (inicio <= fim){
        int meio = (inicio + fim) / 2;
        if (N[meio] == aux){
            return "YES";
        } else if (N[meio] < aux){
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return "NO";
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k, aux;
    cin >> n >> k;
    vector<int> N(n);
    for (int i = 0; i < n; i++){
        cin >> N[i];
    } for (int i = 0; i < k; i++){
        cin >> aux;
        cout << busca_binaria(N, aux, k) << '\n';
    }
}