#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string s;
    cin >> s;
    int state = 0;
    bool sucess = false;
    for (int i = 0 ; i < s.size(); i++){
        
        if (s[i] == 'h'){
            if (state == 0){
                state++;
            } else if (state == 1){
                continue;
            } 
            
        } else if (s[i] == 'e'){
            if (state == 1){
                state++;
            } else if (state == 2){
                continue;
            } 
        } else if (s[i] == 'l'){
            if (state == 2 || state == 3){
                state++;
            } else if (state == 4){
                continue;
            }
        } else if (s[i] == 'o'){
            if (state == 4){
                state++;
                cout << "YES" << '\n';
                sucess = true;
                break;
            } 
        } 
        
    }
     if (sucess == false ) cout << "NO" <<'\n';
    
}

