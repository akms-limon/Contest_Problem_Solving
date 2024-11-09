/**
 *    author: A K M S Limon
 *    created: 26-October-2024  03:23:37
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n], v[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            v[i] = false;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (v[i]) continue;
            int len = 0;
            for (int j = i; !v[j]; j = a[j] - 1) {
                v[j] = true;;
                len++;
            }
            ans += (len - 1) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}