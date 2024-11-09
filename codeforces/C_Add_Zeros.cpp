/**
 *    author: A K M S Limon
 *    created: 26-October-2024  22:16:05
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
        ll ans = n;
        for (int i = 0; i < n; i++) {
            ll temp_size = n, temp_ans = n;
            if (temp_size - i == a[i]) {
                while (temp_size - i == a[i] && i < n) {
                    temp_ans += i;
                    temp_size += i;
                    i++;
                }
                i--;
            }
            ans = max(temp_ans, ans);
        }
        cout << ans << '\n';
    }
    return 0;
}