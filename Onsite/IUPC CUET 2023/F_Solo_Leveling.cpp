/**
 *    author: A K M S Limon
 *    created: 22-October-2024  22:26:00
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll int

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS_Multiset;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, p, e, a; cin >> n >> p >> e >> a;
        p += e;
        PBDS_Multiset s;
        ll ans = a, sum = 0;
        if (a == 0) ans = n;
        for (int i = 0; i < a; i++) {
            int x; cin >> x;
            s.insert(x);
        }
        for (int i = a; i < n; i++) {
            int x; cin >> x;
            if (s.size() != 0) {
                if (*s.begin() <= x) {
                    sum += *s.begin();
                    s.erase(*s.begin());
                    s.insert(x);
                }
            }
            else {
                sum += x;
            }
            if (sum > p) {
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}