/**
 *    author: A K M S Limon
 *    created: 02-April-2024  13:52:35
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 100000 + 10;
int a[N];

struct nd {
    int mn, cnt;
};

nd tree[4 * N];

nd merge(nd one, nd two) {
    nd ans;
    ans.mn = min(one.mn, two.mn);
    ans.cnt = (one.mn == ans.mn ? one.cnt : 0);
    ans.cnt += (two.mn == ans.mn ? two.cnt : 0);
    return ans;
}

void build(int node, int b, int e) {
    if (b == e) {
        tree[node].mn = a[b];
        tree[node].cnt = 1;
        return;
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[node] = merge(tree[l], tree[r]);
}

void upd(int node, int b, int e, int i, int v) {
    if (b > i || e < i) return;
    if (b == e) {
        tree[node].mn = v;
        tree[node].cnt = 1;
        return;
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, v), upd(r, mid + 1, e, i, v);
    tree[node] = merge(tree[l], tree[r]);
}

nd query(int node, int b, int e, int i, int j) {
    if (b > j || e < i) {
        return {1000000009, 1};
    }
    if (b >= i && e <= j) {
        return tree[node];
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
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
            nd ans = query(1, 1, n, l + 1, r);
            cout << ans.mn << ' ' << ans.cnt << '\n';
        }
    }
    return 0;
}