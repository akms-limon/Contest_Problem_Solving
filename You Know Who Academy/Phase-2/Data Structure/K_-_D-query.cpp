/**
 *    author: A K M S Limon
 *    created: 04-May-2024  01:21:40
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 30000 + 10, Q = 1e5 + 10;
ll a[N];
ll t[4 * N];

void build(int n, int b, int e){
    if (b == e){
        t[n] = 0;
        return;
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    t[n] = t[l] + t[r];  
}

int query(int n, int b, int e, int i, int j){
    if (b > j || e < i) {
        return 0; 
    }
    if (b >= i && e <= j){
        return t[n];
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j); 
}

void upd(int n, int b, int e, int i, int x){
    if (b > i || e < i) {
        return;
    }
    if (b == e) {
        t[n] += x;
        return;
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, x), upd(r, mid + 1, e, i, x);
    t[n] = t[l] + t[r]; 
}

vector<pair<int, int>> v[Q];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    int m; cin >> m;
    int ans[m + 1];
    for (int i = 1; i <= m; i++) {
        int l, r; cin >> l >> r;
        v[r].push_back({l, i});
    }
    map<int, int> last_oc;
    for (int r = 1; r <= n; r++) {
        if (last_oc.find(a[r]) != last_oc.end()) {
            upd(1, 1, n, last_oc[a[r]], -1);
        }
        last_oc[a[r]] = r;
        upd(1, 1, n, r, +1);
        for (auto [l, i] : v[r]) {
            ans[i] = query(1, 1, n, l, r);
        }
    }
    for (int i = 1; i <= m; i++) {
        cout << ans[i] << '\n';
    }
    return 0;
}