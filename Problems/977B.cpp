#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string atual="";
    map<string, int> dicio;
    for (int i = 0; i < n-1; i++){
        atual = s[i];
        atual += s[i+1];
        if (dicio.find(atual) != dicio.end()){
            dicio[atual] += 1;
        } else {
            dicio[atual] = 1;
        }
    }
    int maior = 0;
    string resposta;
    for (auto const& pair : dicio){
        if (pair.second > maior){
            maior = pair.second;
            resposta = pair.first;
        }
    }
    cout << resposta << '\n';
}
