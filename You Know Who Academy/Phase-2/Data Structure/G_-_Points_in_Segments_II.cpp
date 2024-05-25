/**
 *    author: A K M S Limon
 *    created: 24-April-2024  11:19:28
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 50000;

int tree[N * 3 * 4];

void build(int node, int b, int e) {
    if (b == e) {
        tree[node] = 0;
        return;
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[node] = tree[l] + tree[r];
}

void upd(int node, int b, int e, int i, int v) {
    if (b > i || e < i) return;
    if (b == e) {
        tree[node] += v;
        return;
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, v), upd(r, mid + 1, e, i, v);
    tree[node] = tree[l] + tree[r];
}

int query(int node, int b, int e, int i, int j) {
    if (b > j || e < i) return 0;
    if (b >= i && e <= j) {
        return tree[node];
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    int cs = 1;
    while (t--) {
        int n, q; cin >> n >> q;
        int a[n], b[n], Q[q];
        set<int> s;
        for (int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i];
            s.insert(a[i]);
            s.insert(b[i]);
        }
        for (int i = 1; i <= q; i++) {
            cin >> Q[i];
            s.insert(Q[i]);
        }
        map<int, int> mp;
        int id = 0;
        for (auto it : s) {
            mp[it] = ++id;
        }
        for (int i = 1; i <= n; i++) {
            a[i] = mp[a[i]];
            b[i] = mp[b[i]];
        }
        for (int i = 1; i <= q; i++) {
            Q[i] = mp[Q[i]];
        }
        build(1, 1, id);
        for (int i = 1; i <= n; i++) {
            int l = a[i], r = b[i];
            upd(1, 1, id, l, 1);
            if (r + 1 <= id) {
                upd(1, 1, id, r + 1, -1);
            }
        }
        cout << "Case " << cs++ << ":\n";
        for (int i = 1; i <= q; i++) {
            int x = Q[i];
            int ans = query(1, 1, id, 1, x);
            cout << ans << '\n';
        }
    }
    return 0;
}