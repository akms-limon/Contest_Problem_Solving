/**
 *    author: A K M S Limon
 *    created: 20-October-2024  15:28:36
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        ll sum = 0, pre = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            ll temp = a[i];
            temp -= pre;
            ll nite_pari = temp * (n - i);
            if (sum + nite_pari >= k) {
                ans += (k - sum);
                break;
            }
            else {
                sum += nite_pari;
                ans += (((n - i) * temp) + 1);
                pre += temp;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}