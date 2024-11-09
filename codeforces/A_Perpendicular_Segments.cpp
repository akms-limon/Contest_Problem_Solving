/**
 *    author: A K M S Limon
 *    created: 28-October-2024  20:43:21
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int x, y, k; cin >> x >> y >> k;
        cout << 0 << ' ' << 0 << ' ' << min(x, y) << ' ' << min(x, y) << '\n';
        cout << min(x, y) << " " << 0 << ' ' << 0 << ' ' << min(x, y) << '\n';
    }
    return 0;
}