/**
 *    author: A K M S Limon
 *    created: 01-May-2024  18:36:19
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n; 
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l[n], r[n];
    o_set<int> s;
    for (int i = 0; i < n; i++) {
        l[i] = s.size() - s.order_of_key(a[i] + 1);
        s.insert(a[i]);
    }
    s.clear();
    for (int i = n - 1; i >= 0; i--) {
        r[i] = s.order_of_key(a[i]);
        s.insert(a[i]);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (1LL * l[i] * r[i]);
    }
    cout << ans << '\n';
    return 0;
}