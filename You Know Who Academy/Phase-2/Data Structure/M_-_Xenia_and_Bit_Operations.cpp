/**
 *    author: A K M S Limon
 *    created: 25-April-2024  20:54:58
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 131072 + 9;
int a[N];
int tree[N * 4];

int merge(int l, int r, int b, int e) {
    int len = e - b + 1;
    int pw = __lg(len);
    if (pw % 2 == 1) {
        return (l | r);
    }
    else {
        return (l ^ r);
    }
}

void build(int n, int b, int e) {
    if (b == e) {
        tree[n] = a[b];
        return;
    }
    int l = n * 2, r = l + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[n] = merge(tree[l], tree[r], b, e);
}

void upd(int n, int b, int e, int i, int v) {
    if (b > i || e < i) {
        return;
    }
    if (b == e) {
        tree[n] = v;
        return;
    }
    int l = n * 2, r = l + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, v), upd(r, mid + 1, e, i, v);
    tree[n] = merge(tree[l], tree[r], b, e);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k; cin >> n >> k;
    n = (1 << n);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    build(1, 1, n);
    while (k--) {
        int p, v; cin >> p >> v;
        upd(1, 1, n, p, v);
        cout << tree[1] << '\n';
    }
    return 0;
}