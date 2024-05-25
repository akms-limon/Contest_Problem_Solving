/**
 *    author: A K M S Limon
 *    created: 25-April-2024  22:34:02
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 100000 + 9;
int a[N];
int tree[4 * N];
int lazy[4 * N];

void push(int node, int b, int e) {
    if (lazy[node] == -1) {
        return;
    }
    tree[node] = lazy[node];
    if (b != e) {
        int l = node * 2, r = node * 2 + 1;
        lazy[l] = lazy[node];
        lazy[r] = lazy[node];
    }
    lazy[node] = -1;
}

void build(int node, int b, int e) {
    lazy[node] = -1;
    if (b == e) {
        tree[node] = a[b];
        return;
    }
    int l = node * 2, r = l + 1, mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
}

void upd(int node, int b, int e, int i, int j, int v) {
    push(node, b, e);
    if (b > j || e < i) {
        return;
    }
    if (b >= i && e <= j) {
        lazy[node] = v;
        push(node, b, e);
        return;
    }
    int l = node * 2, r = l + 1, mid = (b + e) / 2;
    upd(l, b, mid, i, j, v), upd(r, mid + 1, e, i, j, v);
}

int query(int node, int b, int e, int i, int j) {
    push(node, b, e);
    if (b > j || e < i) {
        return 0;
    }
    if (b >= i && e <= j) {
        return tree[node];
    }
    int l = node * 2, r = l + 1, mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k; cin >> n >> k;
    build(1, 1, n);
    while (k--) {
        int c; cin >> c;
        if (c == 1) {
            int l, r, v; cin >> l >> r >> v;
            l++;
            upd(1, 1, n, l, r, v);
        }
        else {
            int i; cin >> i;
            i++;
            cout << query(1, 1, n, i, i) << '\n';
        }
    }
    return 0;
}