#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    string s, resp;
    cin >> s;
    int k;
    cin >> k;
    int tam = s.size();
    vector<string> strings(k, "");
    vector<bool> visitados(tam, false);
    for (int i = 0 ; i < tam; i++){
        if (!visitados[i]){
            for (int j = i; j < tam; j+=k){
                strings[i] += s[j];
                visitados[j] = true;
            }
        }
    }

    for (int i = 0 ; i < k; i++){
        sort(strings[i].begin(), strings[i].end());
    }
    
    for (int i = 0 ; i < tam; i++){
        resp += "-";
    }

    for (int i = 0; i < k; i++){
        for (int x = i, j = 0; x < tam; x += k,  j++){
            resp[x] = strings[i][j];
        }
    }
    cout << resp << '\n';
    return 0;
}