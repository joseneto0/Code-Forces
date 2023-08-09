#include <bits/stdc++.h>
 
using namespace std;
 
int main(void){
    int n;
    cin >> n;
    vector<int> dias(7);
    for (int i = 0; i < 7; i++){
        cin >> dias[i];
    }
    int i = 0;
    while (n > 0){
        n -= dias[i];
        if (i < 6){
            i += 1;
        } else {
            if (n > 0) i = 0;
            else i++;
        }
    }
    cout << i << '\n';
}