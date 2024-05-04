/**
 *    author: A K M S Limon
 *    created: 30-August-2023  02:08:30
**/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

const int N = 1e5;
ll a[N];
ll tree[4 * N];

void build(int node, int b, int e){
    if(b == e){
        cout << b << ' ' << e << '\n';
        cout << node << '\n';
        tree[node] = a[b];
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[node] = tree[l] + tree[r];  // change this
}

int query(int node, int b, int e, int i, int j){
    if(b > j || e < i) return 0;  // return appropriate value
    if(b >= i && e <= j){
        return tree[node];
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j); // change this
}

void upd(int node, int b, int e, int i, int x){
    if(b > i || e < i) return;
    if(b == e) {
        tree[node] = x;  // update
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, x), upd(r, mid + 1, e, i, x);
    tree[node] = tree[l] + tree[r];  // change this
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n=10;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    // cout<<query(1, 1, n, 1, 3)<<'\n';
    // upd(1, 1, n, 2, 1);
    // cout<<query(1, 1, n, 1, 3)<<'\n';
    // upd(1, 1, n, 4, 1);
    // cout<<query(1, 1, n, 1, 5)<<'\n';
    // cout<<t[1]<<'\n';
    // cout<<query(1, 1, n, 2, 4)<<'\n';
    // upd(1, 1, n, 3, 10);
    // cout<<query(1, 1, n, 2, 4)<<'\n';
    return 0;
}