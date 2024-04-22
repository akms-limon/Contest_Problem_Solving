#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc int t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;

const int N = 100009;
int a[N];
ll tree[4 * N];

void build(int node, int b, int e) {
    if (b == e) {
        tree[node] = a[b];
        return;
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[node] = tree[l] + tree[r];
}

void upd(int node, int b, int e, int i, int v) {
    if (b > i || e < i) {
        return;
    }
    if (b == e) {
        tree[node] = v;
        return;
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    upd(l, b, mid, i, v), upd(r, mid + 1, e, i, v);
    tree[node] = tree[l] + tree[r];
}

void add(int node, int b, int e, int i, int v) {
    if (b > i || e < i) {
        return;
    }
    if (b == e) {
        tree[node] += v;
        return;
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    add(l, b, mid, i, v), add(r, mid + 1, e, i, v);
    tree[node] = tree[l] + tree[r];
}

ll query(int node, int b, int e, int i, int j) {
    if (e < i || b > j) return 0;
    if (b >= i && e <= j) {
        return tree[node];
    }
    int l = node * 2, r = l + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cs = 1;
    tc{
        int n, q; cin >> n >> q;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        build(1, 1, n);
        cout << "Case " << cs++ << ": " << '\n';
        while (q--) {
            int op; cin >> op;
            if (op == 1) {
                int i; cin >> i;
                i++;
                cout << query(1, 1, n, i, i) << '\n';
                upd(1, 1, n, i, 0);
            }
            else if (op == 2) {
                int i, v; cin >> i >> v;
                i++;
                add(1, 1, n, i, v);
            }
            else {
                int i, j; cin >> i >> j;
                i++, j++;
                cout << query(1, 1, n, i, j) << '\n';
            }
        }
    }
    return 0;
}