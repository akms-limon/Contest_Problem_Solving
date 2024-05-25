/**
 *    author: A K M S Limon
 *    created: 28-April-2024  18:28:48
**/
#include <bits/stdc++.h>
#define ll int
using namespace std;

ll const N = 1e5;
const ll B = 20;
ll a[N];

struct node {
    ll on[B], of[B];
};

node t[4 * N];
ll lazy[4 * N];

node merge(node l, node r) {
    node ans;
    for (ll i = 0; i < B; i++) {
        ans.on[i] = l.on[i] + r.on[i];
        ans.of[i] = l.of[i] + r.of[i];
    }
    return ans;
}

void build(ll n, ll b, ll e) {
    lazy[n] = 0;
    if (b == e) {
        for (ll i = 0; i < B; i++) {
            if ((a[b] >> i) & 1) {
                t[n].on[i] = 1;
                t[n].of[i] = 0;
            }
            else {
                t[n].of[i] = 1;
                t[n].on[i] = 0;
            }
        }
        return;
    }
    ll l = n * 2, r = n * 2 + 1;
    ll mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

void push(ll n, ll b, ll e) {
    if(lazy[n] == 0) {
        return;
    }
    for (ll i = 0; i < B; i++) {
        if ((lazy[n] >> i) & 1) {
            swap(t[n].on[i], t[n].of[i]);
        }
    }
    if (b != e) {
        ll l = n * 2, r = n * 2 + 1;
        lazy[l] ^= lazy[n];
        lazy[r] ^= lazy[n];
    }
    lazy[n] = 0;
}

void upd(ll n, ll b, ll e, ll i, ll j, ll x) {
    push(n, b, e);
    if (j < b || e < i) {
        return;
    }
    if(i <= b && e <= j) {
        lazy[n] = x;
        push(n, b, e);
        return;
    }
    ll l = n * 2, r = n * 2 + 1;
    ll mid = (b + e) / 2; 
    upd(l, b, mid, i, j, x), upd(r, mid + 1, e, i, j, x);
    t[n] = merge(t[l], t[r]);
}

node query(ll n, ll b, ll e, ll i, ll j) {
    push(n, b, e);
    if(i > e || b > j) {
        node temp;
        memset(temp.on, 0, sizeof(temp.on));
        memset(temp.of, 0, sizeof(temp.of));
        return temp;
    }
    if(i <= b && e <= j) {
        return t[n];
    }
    ll l = n * 2, r = n * 2 + 1;
    ll mid = (b + e) / 2; 
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    ll q; cin >> q;
    while (q--) {
        ll ck; cin >> ck;
        if (ck == 1) {
            ll l, r; cin >> l >> r; 
            node ans = query(1, 1, n, l, r);
            long long sum = 0;
            for (ll i = 0; i < B; i++) {
                sum += (1 << i) * 1LL * ans.on[i];
            }
            cout << sum << '\n';
        }
        else {
            ll l, r, x; cin >> l >> r >> x;
            upd(1, 1, n, l, r, x);
        }
    }
    return 0;
}