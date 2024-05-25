/**
 *    author: A K M S Limon
 *    created: 04-May-2024  02:58:21
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 10;
int tree[4 * N];

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
        tree[node] += v;
        return;
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, v), upd(r, mid + 1, e, i, v);
    tree[node] = tree[l] + tree[r];
}

int ans[N], pos[N];
vector<int> pairs[N];
vector<pair<int, int>> question[N];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j+= i) {
            int l = min(pos[j], pos[i]);
            int r = max(pos[j], pos[i]);
            pairs[r].push_back(l);
        }
    }
    for (int i = 1; i <= q; i++) {
        int l, r; cin >> l >> r;
        question[r].push_back({l, i});
    }
    for (int r = 1; r <= n; r++) {
        for (auto l : pairs[r]) {
            upd(1, 1, n, l, +1);
        }
        for (auto [l, id] : question[r]) {
            ans[id] = query(1, 1, n, l, r);
        }
    }
    for (int i = 1; i <= q; i++) {
        cout << ans[i] << '\n';
    }
    return 0;
}