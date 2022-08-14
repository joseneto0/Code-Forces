//problema 791A
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int a, b, cont=0;
    cin >> a >> b;
    while (a <= b){
        a *= 3;
        b *= 2;
        cont += 1;
    }
    cout << cont << '\n';
    return 0;
}