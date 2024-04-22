/**
 *    author: A K M S Limon
 *    created: 27-March-2024  02:19:04
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 100010;
ll a[N];
ll tree[4 * N];

void build(int node, int b, int e) {
    if (b == e) {
        tree[node] = a[b];
        return;
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[node] = min(tree[l], tree[r]);
}

ll query(int node, int b, int e, int i, int j) {
    if (b > j || e < i) {
        return LONG_LONG_MAX;
    }
    if (b >= i && e <= j) {
        return tree[node];
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

void upd(int node, int b, int e, int i, int v) {
    if (b > i || e < i) {
        return;
    }
    if (b == e) {
        tree[node] = v;
        return;
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, v), upd(r, mid + 1, e, i, v);
    tree[node] = min(tree[l], tree[r]);
}



int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    while (m--) {
        int op; cin >> op;
        if (op == 1) {
            int i, v; cin >> i >> v;
            upd(1, 1, n, i + 1, v);
        }
        else {
            int l, r; cin >> l >> r;
            cout << query(1, 1, n, l + 1, r) << '\n';
        }
    }
    return 0;
}