#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, h; 
    cin >> n >> h;
    vector<int> forca(n);
    for (int i = 0; i < n; i++){
        cin >> forca[i];
    }
    bool perdeu = false;
    for (int i = 0; i < n; i++){
        if (h >= forca[i]){
            h += forca[i];
        } else {
            perdeu = true;
            break;
        }
    }
    if (!perdeu){
        cout << "SIM" << '\n';
    } else {
        cout << "NAO" << "\n";
    }
}