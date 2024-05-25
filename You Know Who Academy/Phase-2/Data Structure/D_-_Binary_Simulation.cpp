/**
 *    author: A K M S Limon
 *    created: 26-April-2024  12:04:31
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 100000 + 9;
int a[N];
int lazy[4 * N];

struct node {
    int one_occ, zero_occ, ans;
};

node t[4 * N];

node merge(node l, node r) {
    if (l.one_occ == -1) {
        return r;
    }
    if (r.one_occ == -1) {
        return l;
    }
    node temp;
    if (l.zero_occ > 0 || r.zero_occ > 0) {
        temp.ans = 0;
    }
    else {
        temp.ans = 1;
    }
    temp.one_occ = 0;
    temp.one_occ += (l.one_occ + r.one_occ);
    temp.zero_occ = 0;
    temp.zero_occ += (l.zero_occ + r.zero_occ);
    return temp;
}

void build(int n, int b, int e) {
    lazy[n] = 0;
    if (b == e) {
        t[n].ans = a[b];
        if (a[b] == 1) {
            t[n].one_occ = 1;
            t[n].zero_occ = 0;
        }
        else {
            t[n].one_occ = 0;
            t[n].zero_occ = 1; 
        }
        return;
    }
    int l = n * 2, r = n * 2 + 1, mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

void push(int n, int b, int e) {
    if (lazy[n] == 0) {
        return;
    }
    if (lazy[n] % 2 == 1) {
        swap(t[n].one_occ, t[n].zero_occ);
        if (t[n].zero_occ > 0) {
            t[n].ans = 0;
        }
        else {
            t[n].ans = 1;
        }
    }
    if (b != e) {
        int l = n * 2, r = n * 2 + 1; 
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

void upd(int n, int b, int e, int i, int j) {
    push(n, b, e);
    if (b > j || e < i) {
        return;
    }
    if (b >= i && e <= j) {
        lazy[n] ++;
        push(n, b, e);
        return;
    }
    int l = n * 2, r = n * 2 + 1, mid = (b + e) / 2;
    upd(l, b, mid, i, j), upd(r, mid + 1, e, i, j);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j) {
    push(n, b, e);
    if (e < i || b > j) {
        return {-1, -1, -1};
    }
    if (i <= b && e <= j) {
        return t[n];
    }
    int l = n * 2, r = n * 2 + 1, mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid+1, e, i, j));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int tc; cin >> tc;
    int cs = 1;
    while (tc--) {
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                a[i + 1] = 1;
            }
            else {
                a[i + 1] = 0;
            }
        }
        int n = s.size();
        build(1, 1, n);
        int q; cin >> q;
        cout << "Case " << cs++ << ":" << '\n';
        while (q--) {
            char c; cin >> c;
            if (c == 'I') {
                int l, r; cin >> l >> r;
                upd(1, 1, n, l, r);
            }
            else {
                int i; cin >> i;
                node x = query(1, 1, n, i, i);
                cout << x.ans << '\n';
            }
        }
    }
    return 0;
}