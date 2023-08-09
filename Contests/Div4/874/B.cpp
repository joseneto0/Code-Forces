#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> A(n);
    vector<int> B(n), ordernado(n);
    for (int i = 0; i < n; i++){
        cin >> A[i].first;
        A[i].second = i;
    }
    for (int i = 0; i < n; i++){
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for (int i = 0; i < n ; i++){
        ordernado[A[i].second] = B[i];
    }
    for (int i = 0; i < n; i++){
        cout << ordernado[i] << ' ';
    }
    cout << '\n';
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t; while(t--){solve();}
}