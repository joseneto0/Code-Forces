#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define all(x) x.begin(),x.end()
#define len(x) (int)x.size()

void solve()
{
    string n; cin >> n;

    bool flag = false;
    for(int i = 0; i < len(n); i++){
        if(flag){
            n[i] = '1';
            continue;
        }

        if((n[i]-'0')%2 == 0){
            n[i]++;
            flag = true;
        }
        if(n[i] == '7'){
            n[i] = '9';
            flag = true;
        }
    }

    cout << n << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    // int t; cin >> t; 
    // while(t--)
        solve();

    return 0;
}