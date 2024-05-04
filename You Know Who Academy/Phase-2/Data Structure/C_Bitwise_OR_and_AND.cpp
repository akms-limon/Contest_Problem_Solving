/**
 *    author: A K M S Limon
 *    created: 28-April-2024  16:20:30
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int const N = 1e5;
ll a[N];
ll t[4 * N];
ll lazy[4 * N];

void build(int n, int b, int e){
    lazy[n] = -1;
    if (b == e){
        t[n] = a[b] = 0;
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    t[n] = t[l] & t[r];
}
 
void push(int n, int b, int e){
    if(lazy[n] == -1) return;
    t[n] |= lazy[n];
    if(b != e){
        int l = n * 2, r = n * 2 + 1;
        if (lazy[l] == -1) {
            lazy[l] = 0;
        }
        if (lazy[r] == -1) {
            lazy[r] = 0;
        }
        lazy[l] |= lazy[n];
        lazy[r] |= lazy[n];
    }
    lazy[n] = -1;
}

void upd(int n, int b, int e, int i, int j, ll x){
    push(n, b, e);
    if(j < b || e < i) return;
    if(i <= b && e <= j){
        lazy[n] = x;
        push(n, b, e);
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2; 
    upd(l, b, mid, i, j, x), upd(r, mid + 1, e, i, j, x);
    t[n] = t[l] & t[r];
}

ll query(int n, int b, int e, int i, int j){
    push(n, b, e);
    if(i > e || b > j) return (1 << 30) - 1;
    if(i <= b && e <= j) return t[n];
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2; 
    return query(l, b, mid, i, j) & query(r, mid + 1, e, i, j);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    build(1, 1, n);
    while (m--) {
        int ck; cin >> ck;
        if (ck == 1) {
            ll l, r, v; cin >> l >> r >> v;
            l++;
            upd(1, 1, n, l, r, v);
        }
        else {
            ll l, r; cin >> l >> r;
            l++;
            cout << query(1, 1, n, l, r) << '\n';
        }
    }
    return 0;
}