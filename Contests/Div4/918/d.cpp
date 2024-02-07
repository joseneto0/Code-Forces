#include <bits/stdc++.h>

using namespace std;

int n;
string s;

bool isVowel(char c) {
    return (c == 'a' || c == 'e');
}

void divideEmSilabas() {
    string palavra = "";
    for (int i = 0; i < n; i++){
        palavra += s[i];
        if (palavra.size() == 3){
            if (isVowel(palavra[2])){
                palavra.pop_back();
                cout << palavra;
                cout << '.';
                palavra = s[i];
            } else {
                if (i+1 < n){
                    if (!isVowel(s[i+1])){
                        cout << palavra;
                        cout << '.';
                        palavra = "";
                    } else {
                        palavra.pop_back();
                        cout << palavra;
                        cout << '.';
                        palavra = s[i];
                    }
                }
            }
        }
    }
    if (palavra.size() > 0){
        cout << palavra;
    }
}

void solve(){
    cin >> n;
    cin >> s;
    divideEmSilabas();
    cout << "\n";
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}