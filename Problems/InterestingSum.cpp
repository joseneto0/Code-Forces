//problema 1720B
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int T, N;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> N;
        vector<int> valores(N);
        vector<int> valores2;
        for (int j = 0; j < N; j++){
            cin >> valores[j];
        }
        int maior1 = *max_element(valores.begin(), valores.end());
        int menor1 = *min_element(valores.begin(), valores.end());
        int sub1 = maior1 - menor1;
        int cont1 = 0;
        int cont2 = 0;
        for (int j = 0; j < valores.size(); j++){
            if (valores[j] == maior1){
                if (cont1 == 0){
                    cont1++;
                } else {
                    valores2.push_back(valores[j]);
                }
            } else if (valores[j] == menor1){
                if (cont2 == 0){
                    cont2++;
                } else {
                    valores2.push_back(valores[j]);
                }
            } else {
                valores2.push_back(valores[j]);
            }
        }
        int maior2 = *max_element(valores2.begin(), valores2.end());
        int menor2 = *min_element(valores2.begin(), valores2.end());
        int sub2 = maior2 - menor2;
        valores.clear();
        valores2.clear();
        cout << sub2 + sub1 << endl;
    }
    return 0;
}