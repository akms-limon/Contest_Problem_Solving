/**
 *    author: A K M S Limon
 *    created: 25-April-2024  16:54:27
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
int a[N];

struct node {
    int first_element, first_element_occ;
    int last_element, last_element_occ;
    int strongest_community_size;
};

node tree[N * 4];

node merge(node l, node r) {
    if (l.first_element == -1) {
        return r;
    }
    if (r.first_element == -1) {
        return l;
    }
    node ans;
    ans.first_element = l.first_element;
    ans.first_element_occ = l.first_element_occ;
    if (l.first_element == r.first_element) {
        ans.first_element_occ += r.first_element_occ;
    }
    ans.last_element = r.last_element;
    ans.last_element_occ = r.last_element_occ;
    if (l.last_element == r.last_element) {
        ans.last_element_occ += l.last_element_occ;
    }
    ans.strongest_community_size = max(l.strongest_community_size, r.strongest_community_size);
    if (l.last_element == r.first_element) {
        ans.strongest_community_size = max(ans.strongest_community_size, l.last_element_occ + r.first_element_occ);
    }
    return ans;
}

void build(int n, int b, int e) {
    if (b == e) {
        tree[n].first_element = tree[n].last_element = a[b];
        tree[n].first_element_occ = tree[n].last_element_occ = 1;
        tree[n].strongest_community_size = 1;
        return;
    }
    int l = n * 2, r = l + 1;
    int mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    tree[n] = merge(tree[l], tree[r]);
}

node query(int n, int b, int e, int i, int j) {
    if (b > j || e < i) return {-1, -1, -1, -1, -1};
    if (b >= i && e <= j) {
        return tree[n];
    }
    int l = n * 2, r = l + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t; 
    int cs = 1;
    while (t--) {
        int n, c, q; cin >> n >> c >> q;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        build(1, 1, n);
        cout << "Case " << cs++ << ":\n";
        while (q--) {
            int l, r; cin >> l >> r;
            node ans = query(1, 1, n, l, r);
            cout << ans.strongest_community_size << '\n';
        }
    }
    return 0;
}