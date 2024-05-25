/**
 *    author: A K M S Limon
 *    created: 25-April-2024  22:34:02
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 100000 + 9;
ll a[N];
ll tree[4 * N];
ll lazy[4 * N];

void push(ll node, ll b, ll e) {
    if (lazy[node] == 0) {
        return;
    }
    tree[node] += lazy[node] * (e - b + 1);
    if (b != e) {
        ll l = node * 2, r = node * 2 + 1;
        lazy[l] += lazy[node];
        lazy[r] += lazy[node];
    }
    lazy[node] = 0;
}

void build(ll node, ll b, ll e) {
    lazy[node] = 0;
    if (b == e) {
        tree[node] = a[b];
        return;
    }
    ll l = node * 2, r = l + 1, mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[node] = tree[l] + tree[r];
}

void upd(ll node, ll b, ll e, ll i, ll j, ll v) {
    push(node, b, e);
    if (b > j || e < i) {
        return;
    }
    if (b >= i && e <= j) {
        lazy[node] += v;
        push(node, b, e);
        return;
    }
    ll l = node * 2, r = l + 1, mid = (b + e) / 2;
    upd(l, b, mid, i, j, v), upd(r, mid + 1, e, i, j, v);
    tree[node] = tree[l] + tree[r];
}

ll query(ll node, ll b, ll e, ll i, ll j) {
    push(node, b, e);
    if (b > j || e < i) {
        return 0;
    }
    if (b >= i && e <= j) {
        return tree[node];
    }
    ll l = node * 2, r = l + 1, mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, k; cin >> n >> k;
    build(1, 1, n);
    while (k--) {
        ll c; cin >> c;
        if (c == 1) {
            ll l, r, v; cin >> l >> r >> v;
            l++;
            upd(1, 1, n, l, r, v);
        }
        else {
            ll i; cin >> i;
            i++;
            cout << query(1, 1, n, i, i) << '\n';
        }
    }
    return 0;
}