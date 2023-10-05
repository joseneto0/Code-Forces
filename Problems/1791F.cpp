#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX = 1e6+10;


void build(vector<int>& segtree, vector<int>& a, int n){
	for (int i = 0; i < n; i++)
		segtree[n + i] = a[i];
	for (int i = n - 1; i >= 1; i--)
		segtree[i] = max(segtree[2 * i], segtree[2 * i + 1]);
}

void update(vector<int>& segtree, int pos, int value, int n){
	pos += n;
	segtree[pos] = value;
	while (pos > 1) {
		pos >>= 1;
		segtree[pos] = max(segtree[2 * pos], segtree[2 * pos + 1]);
	}
}

int range_query(vector<int>& segtree, int left, int right, int n){
	left += n;
	right += n;
	int ma = INT_MIN;
	while (left < right) {
		if (left & 1) {
			ma = max(ma, segtree[left]);
			left++;
		}
		if (right & 1) {
			right--;
			ma = max(ma, segtree[right]);
		}
		left /= 2;
		right /= 2;
	}
	return ma;
}


void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> segtree(4*n);
    build(segtree, a, n);
    int op, l, r;
    for (int i = 0; i < q; i++){
        cin >> op;
        if (op == 1){
            cin >> l >> r;
            update()
            l--; r--;
        } else {
            cin >> l;
            l--;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}