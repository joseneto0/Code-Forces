#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void build(vector<int> &tree, vector<int> &A, int node, int start, int end){
    if(start == end){
        tree[node] = A[start];
    } else {
        int mid = (start + end) / 2;
        build(tree, A, 2*node, start, mid);
        build(tree, A, 2*node+1, mid+1, end);
        tree[node] = tree[2*node] & tree[2*node+1];
    }
}

int query(vector<int> &tree, int node, int start, int end, int l, int r){
    if(r < start or end < l){
        return INT_MAX;
    }
    if(l <= start and end <= r){
        return tree[node];
    }
    int mid = (start + end) / 2;
    int p1 = query(tree, 2*node, start, mid, l, r);
    int p2 = query(tree, 2*node+1, mid+1, end, l, r);
    return (p1 & p2);
}


void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    vector<int> tree(4*n);
    build(tree, a, 1, 1, n);
    int q;
    cin >> q;
    ll l, k;
    for (int i = 0; i < q; i++){
        cin >> l >> k;
        ll resp = -1;
        ll esq = l, dir = n;
        while (esq <= dir){
            ll mid = (esq + dir) / 2;
            if (query(tree, 1, 1, n, l, mid) >= k){
                esq = mid+1;
                resp = mid;
            } else {
                dir = mid-1;
            }
        }
        cout << resp << ' ';
    }
    cout << '\n';
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