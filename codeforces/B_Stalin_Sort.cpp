/**
 *    author: A K M S Limon
 *    created: 27-October-2024  10:02:44
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
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = i + 1; j < n; j++) {
                if (a[j] > a[i]) cnt++;
            }
            ans = min(ans, cnt + i);
        }
        cout << ans << '\n';
    }
    return 0;
}