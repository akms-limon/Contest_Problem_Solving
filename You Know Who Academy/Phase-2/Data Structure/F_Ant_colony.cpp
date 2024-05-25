/**
 *    author: A K M S Limon
 *    created: 30-April-2024  01:35:12
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5;
ll a[N];

struct node {
    int mn, mn_cnt, gcd;
};

node t[4 * N];

node merge(node l, node r) {
    if (l.mn == -1) return r;
    if (r.mn == -1) return l;
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.mn_cnt = 0;
    if (ans.mn == l.mn) {
        ans.mn_cnt += l.mn_cnt;
    }
    if (ans.mn == r.mn) {
        ans.mn_cnt += r.mn_cnt;
    }
    ans.gcd = __gcd(l.gcd, r.gcd);
    return ans;
}

void build(int n, int b, int e){
    if (b == e){
        t[n].mn = a[b];
        t[n].mn_cnt = 1;
        t[n].gcd = a[b];
        return;
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);  
}

node query(int n, int b, int e, int i, int j){
    if (b > j || e < i) {
        return {-1, -1, -1};
    }
    if (b >= i && e <= j){
        return t[n];
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); 
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n; 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    int q; cin >> q;
    while (q--) {
        int l, r; cin >> l >> r;
        node ans = query(1, 1, n, l, r);
        if (ans.gcd % ans.mn == 0) {
            cout << r - l + 1 - ans.mn_cnt << '\n';
        }
        else {
            cout << r - l + 1 << '\n';
        }
    }
    return 0;
}