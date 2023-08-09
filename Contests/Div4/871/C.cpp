#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int m, soma=0;
    map<string, vector<int>> valores;
    vector<int> A;
    while (n--){
        string binario;
        int partes = 0;
        cin >> m >> binario;
        if (binario != "00"){
            valores[binario].push_back(m); 
        }
    }
    bool direita = false, esquerda = false, meio = false;
    int somaMeio = 0;
    for (auto const& pair : valores){
        if (pair.first == "01"){
            direita = true;
            soma += *min_element(pair.second.begin(), pair.second.end());
        } else if (pair.first == "10"){
            esquerda = true;
            soma += *min_element(pair.second.begin(), pair.second.end());
        } else if (pair.first == "11"){
            meio = true;
            somaMeio = *min_element(pair.second.begin(), pair.second.end());
        }
        
    }
    if (somaMeio > 0 && soma > 0 && direita && esquerda){
        if (soma < somaMeio){
            meio = false;
        }
    }
    if (meio == true){
        cout << somaMeio << '\n';
    } else if (direita == true && esquerda == true){
        cout << soma << '\n';
    } else {
        cout << -1 << '\n';
    }
}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}