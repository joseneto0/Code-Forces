#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5;
const long long LLINF = 0x3f3f3f3f3f3f3f3f;

long long tree[4*MAX], vet[MAX];

int merge(int a, int b){
    return min(a, b);
}

void build(int l, int r, int n){
    if (l == r){
        tree[n] = vet[l];
        return;
    }
    int mid = (l + r) / 2;
    build(l, mid, 2*n);
    build(mid+1, r, 2*n+1);
    tree[n] = merge(tree[2*n], tree[2*n+1]);
}

void update(int ind, int alt, int l, int r, int n){
    if (l == r){
        tree[n] = alt;
        return;
    }
    int mid = (l + r) / 2;
    if (ind <= mid){
        update(ind, alt, l, mid, 2*n);
    } else {
        update(ind, alt, mid+1, r, 2*n+1);
    }
    tree[n] = merge(tree[2*n], tree[2*n+1]);
}

long long query(int a, int b, int l, int r, int n){
    if (b < l || r < a){
        return LLINF;
    }
    if (a <= l && r <= b){
        return tree[n];
    }
    int mid = (l + r) / 2;
    long long minEsq = query(a, b, l, mid, 2*n);
    long long minDir = query(a, b, mid+1, r, 2*n+1);
    return merge(minDir, minEsq);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m, op, l, r;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> vet[i];
    }
    build(0, n-1, 1);
    for (int i = 0; i < m; i++){
        cin >> op >> l >> r;
        if (op == 1){
            update(l, r, 0, n-1, 1);
        } else {
            cout << query(l, r-1, 0, n-1, 1) << '\n';
        }
    }
    return 0;
}