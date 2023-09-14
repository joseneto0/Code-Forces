#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve(){
	string n;
	cin >> n;
	n = '0' + n;
	int pos = n.size();
	for (int i = n.size()-1; i >= 0; i--){
		if (n[i] >= '5'){
			n[i-1]++;
			pos = i;		
		}
	}
	for (int i = 0; i < n.size(); i++){
		if (n[0] == '0' && i == 0) continue;
		if (i >= pos) {
			cout << '0'; 
		} else cout << n[i];
	}
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
