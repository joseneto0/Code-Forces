#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k, l, c, d, p, nl, np, refri, limao, sal;
    vector<int> valores;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    valores.push_back((k * l) / nl);
    valores.push_back((c * d));
    valores.push_back(p / np);
    cout << *min_element(valores.begin(), valores.end()) / n << '\n';
}