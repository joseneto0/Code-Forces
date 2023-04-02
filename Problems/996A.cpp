#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, notas=0;
    cin >> n;
    notas += n / 100;
    n %= 100;
    notas += n / 20;
    n %= 20;
    notas += n / 10;
    n %= 10;
    notas += n/5;
    n %= 5;
    notas += n / 1;
    n %= 1;
    cout << notas << '\n';
}