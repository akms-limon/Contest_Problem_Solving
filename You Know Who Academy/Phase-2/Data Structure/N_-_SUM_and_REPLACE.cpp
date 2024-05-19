/**
 *    author: A K M S Limon
 *    created: 05-May-2024  03:18:38
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 9;
int d[N], a[N];
ll tree[4 * N];

void build(int node, int b, int e) {
    if (b == e) {
        tree[node] = a[b];
        return;
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[node] = tree[l] + tree[r];
}

ll query(int node, int b, int e, int i, int j) {
    if (b > j || e < i) {
        return 0;
    }
    if (b >= i && e <= j) {
        return tree[node];
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
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
    tree[node] = tree[l] + tree[r];
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            d[j]++;
        }
    }
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    set<int> s;
    for (int i = 1; i <= n; i++) {
        if (a[i] > 2) {
            s.insert(i);
        }
    }
    while (q--) {
        int ty, l, r; cin >> ty >> l >> r;
        if (ty == 1) {
            auto it = s.lower_bound(l);
            vector<int> to_del;
            while (it != s.end() && (*it) <= r) {
                int i = *it;
                upd(1, 1, n, i, d[a[i]]);
                a[i] = d[a[i]];
                if (a[i] <= 2) {
                    to_del.push_back(i);
                }
                ++it;
            }
            for (auto i : to_del) {
                s.erase(i);
            }
        }
        else {
            cout << query(1, 1, n, l, r) << '\n';
        }
    }
    return 0;
}