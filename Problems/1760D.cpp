#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){   
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		if (a[i-1] == a[i]+1 && a[i+1] == a[i]+1){
			cout << "YES" << '\n';
			break;
	}	

}

int main(void){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t; while (t--) { solve(); }
}
