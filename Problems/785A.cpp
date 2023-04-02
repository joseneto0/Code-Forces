#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, cont=0;
    string poliedro;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> poliedro;
        if (poliedro.compare("Icosahedron") == 0) {
            cont+= 20;
        } else if (poliedro.compare("Dodecahedron") == 0) {
            cont+= 12;
        } else if (poliedro.compare("Octahedron") == 0) {
            cont += 8;
        } else if (poliedro.compare("Cube") == 0) {
            cont += 6;
        } else if (poliedro.compare("Tetrahedron") == 0) {
            cont += 4;
        }
    }
    cout << cont << '\n';
}