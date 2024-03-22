#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define ll long long int

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAX = 1e3+10;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int n, aux;
    cin >> n;
    vector<int> freq(5);
    for (int i = 0; i < n; i++){
        cin >> aux;
        freq[aux]++;
    }
    int ans = freq[4] + freq[3] + (freq[2]/2);
    freq[1] -= freq[3];
    if (freq[2] % 2 == 1){
        ans++;
        freq[1] -= 2;
    }
    if (freq[1] > 0){
        ans += (freq[1] + 3) / 4;
    }
    cout << ans << "\n";
    return 0;
}