#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int n;
    cin >> n;
    string s, nS = "";
    cin >> s;
    while (s.length() > 0){
        if (n % 2 == 0){
            nS += s[n/2];
            s.erase(n/2, 1);
        } else {
            nS += s[n/2+1];
            s.erase(n/2+1, 1);
        }
        n -= 1;
        cout << nS << '\n';
    }
}