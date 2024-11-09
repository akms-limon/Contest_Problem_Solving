/**
 *    author: A K M S Limon
 *    created: 26-October-2024  20:52:32
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n; cin >> n; 
        ll ans, mx = INT_MIN, mn = INT_MIN;
        while (n--) {
            ll x, y; cin >> x >> y;
            mx = max(mx, x);
            mn = max(mn, y);
        }
        cout << (mx + mn) * 2 << '\n';
    }
    return 0;
}