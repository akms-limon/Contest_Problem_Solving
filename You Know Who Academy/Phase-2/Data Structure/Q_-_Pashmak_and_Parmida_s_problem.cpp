/**
 *    author: A K M S Limon
 *    created: 02-May-2024  11:05:04
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int> mp;
    int l[n], r[n];
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
        l[i] = mp[a[i]];
    }
    mp.clear();
    for (int i = n - 1; i >= 0; i--) {
        mp[a[i]]++;
        r[i] = mp[a[i]];
    }
    o_set <pair<int, int>> st;
    long long ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        ans += st.order_of_key({l[i], i});
        st.insert({r[i], i});
    }
    cout << ans << '\n';
    return 0;
}