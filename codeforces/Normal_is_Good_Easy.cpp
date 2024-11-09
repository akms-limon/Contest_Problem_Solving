/**
 *    author: A K M S Limon
 *    created: 23-October-2024  21:06:19
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ll cnt = 0, temp = a[i];
            while (a[i] == temp && i < n) {
                cnt++;
                i++;
            }
            i--;
            ans += (cnt * (cnt + 1)) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}