/**
 *    author: A K M S Limon
 *    created: 25-April-2024  16:54:27
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 5e4 + 9, inf = 1e9;
int a[N];

struct node {
    int max_prefix_sum, max_suffix_sum;
    int max_subarray_sum;
    int total_sum;
};

node tree[N * 4];

node merge(node l, node r) {
    if (l.max_prefix_sum == inf) {
        return r;
    }
    else if (r.max_prefix_sum == inf) {
        return l;
    }
    node ans;
    ans.max_subarray_sum = max(l.max_subarray_sum, r.max_subarray_sum);
    ans.max_subarray_sum = max(ans.max_subarray_sum, (l.max_suffix_sum + r.max_prefix_sum));
    ans.max_prefix_sum = max(l.max_prefix_sum, l.total_sum + r.max_prefix_sum);
    ans.max_suffix_sum = max(r.max_suffix_sum, r.total_sum + l.max_suffix_sum);
    ans.total_sum = l.total_sum + r.total_sum;
    return ans;
}

void build(int n, int b, int e) {
    if (b == e) {
        tree[n].max_prefix_sum = a[b];
        tree[n].max_suffix_sum = a[b];
        tree[n].total_sum = a[b];
        tree[n].max_subarray_sum = a[b];
        return;
    }
    int l = n * 2, r = l + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[n] = merge(tree[l], tree[r]);
}

node query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return {inf, inf, inf, inf};
    if (b >= i && e <= j) {
        return tree[n];
    }
    int l = n * 2, r = l + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

void upd(int n, int b, int e, int i, int x){
    if (b > i || e < i) {
        return;
    }
    if (b == e) {
        tree[n].max_prefix_sum = x;
        tree[n].max_suffix_sum = x;
        tree[n].total_sum = x;
        tree[n].max_subarray_sum = x;
        return;
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, x), upd(r, mid + 1, e, i, x);
    tree[n] = merge(tree[l], tree[r]); 
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n; 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    int m; cin >> m;
    while (m--) {
        int ck, l, r; cin >> ck >> l >> r;
        if (ck == 0) {
            upd(1, 1, n, l, r);
        }
        else {
            node ans = query(1, 1, n, l, r);
            cout << ans.max_subarray_sum << '\n';
        }
    }
    return 0;
}