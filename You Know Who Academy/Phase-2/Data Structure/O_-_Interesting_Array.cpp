/**
 *    author: A K M S Limon
 *    created: 29-April-2024  14:47:20
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 10;
ll ans[N], l[N], r[N], req_and[N], bit[N];
ll t[N * 4];

void build(ll n, ll b, ll e) {
    if (b == e) {
        t[n] = ans[b];
        return;
    }
    ll l = n * 2, r = (n * 2) + 1, mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    t[n] = t[l] & t[r];
}

ll query(ll n, ll b, ll e, ll i, ll j) {
    if (b > j || e < i) {
        return -1;
    }
    if (b >= i && e <= j) {
        return t[n];
    }
    ll l = n * 2, r = (n * 2) + 1, mid = (b + e) / 2;
    return query(l, b, mid, i, j) & query(r, mid + 1, e, i, j);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, m; cin >> n >> m;
    for (ll i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> req_and[i];
    }
    ll B = 34;
    for (ll i = 0; i < B; i++) {
        for (ll j = 1; j <= n; j++) {
            bit[j] = 0;
        }
        for (ll j = 1; j <= m; j++) {
            if ((req_and[j] >> i) & 1) {
                bit[l[j]]++;
                bit[r[j] + 1]--;
            }
        }
        for (ll j = 1; j <= n; j++) {
            bit[j] += bit[j - 1];
        }
        for (ll j = 1; j <= n; j++) {
            if (bit[j]) {
                ans[j] |= (1 << i);
            }
        }
    }
    build(1, 1, n);
    bool bl = true;
    for (ll i = 1; i <= m; i++) {
        ll x = query(1, 1, n, l[i], r[i]);
        if (x != req_and[i]) {
            bl = false;
            break;
        }
    }
    if (!bl) {
        cout << "NO" << '\n';
    }
    else {
        cout << "YES" << '\n';
        for (ll i = 1; i <= n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}