/**
 *    author: A K M S Limon
 *    created: 20-October-2024  15:12:49
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int ans;
        int a, b; cin >> a >>b;
        if (a >= b) {
            ans = a;
        }
        else if (a - (b - a) == b - 2 * (b - a)) {
            ans = a - (b - a);
        }
        else {
            ans = 0;
        }
        if (ans < 0) ans = 0;
        cout << ans << '\n';
    }
    return 0;
}