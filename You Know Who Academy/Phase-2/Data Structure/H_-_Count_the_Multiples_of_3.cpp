/**
 *    author: A K M S Limon
 *    created: 28-April-2024  17:00:43
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int const N = 1e5 + 10;

struct node {
    int one, two, zero;
};

node t[4 * N];
ll lazy[4 * N];

node merge(node l, node r) {
    node ans;
    ans.zero = l.zero + r.zero;
    ans.one = l.one + r.one;
    ans.two = l.two + r.two;
    return ans;
}

void build(int n, int b, int e){
    lazy[n] = 0; 
    if (b == e){
        t[n].zero = 1;
        t[n].one = 0;
        t[n].two = 0;
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}
 
void push(int n, int b, int e){
    lazy[n] %= 3;
    if(lazy[n] == 0) return;
    int temp = lazy[n];
    while (temp--) {
        int p = t[n].zero;
        t[n].zero = t[n].one;
        t[n].one = t[n].two;
        t[n].two = p;
    }
    if(b != e){
        int l = n * 2, r = n * 2 + 1;
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

void upd(int n, int b, int e, int i, int j, ll x){
    push(n, b, e);
    if(j < b || e < i) return;
    if(i <= b && e <= j){
        lazy[n] += x;
        push(n, b, e);
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2; 
    upd(l, b, mid, i, j, x), upd(r, mid + 1, e, i, j, x);
    t[n] = merge(t[l], t[r]);
}

int query(int n, int b, int e, int i, int j){
    push(n, b, e);
    if(i > e || b > j) return 0;
    if(i <= b && e <= j) return t[n].zero;
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2; 
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    int cs = 1;
    while (t--) {
        cout << "Case " << cs++ << ":" << '\n';
        int n, k; cin >> n >> k;
        build(1, 1, n);
        while (k--) {
            int ck, l, r; cin >> ck >> l >> r;
            l++, r++;
            if (ck == 0) {
                upd(1, 1, n, l, r, 1);
            }
            else {
                cout << query(1, 1, n, l, r) << '\n';
            }
        } 
    }
    return 0;
}