/**
 *    author: A K M S Limon
 *    created: 17-October-2024  16:11:10
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
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int k = max(i - 100, 0); k < min(i + 100, n); k++) {
                if (abs(a[i] - a[k]) == abs(i - k)) {
                    ans += abs(i - k) + 1;
                }
                else if (abs(a[i] - a[k]) > abs(i - k)) {
                    int x = abs(a[i] - a[k]) - abs(i - k);
                    if (x % 2 == 0) {
                        if (min(k, i) - x / 2 >= 0) {
                            ans++;
                        }
                        if (x / 2 + max(i, k) < n) {
                            ans++;
                        }
                    }
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}