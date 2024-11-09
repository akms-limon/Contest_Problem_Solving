/**
 *    author: A K M S Limon
<<<<<<< HEAD
 *    created: 26-October-2024  01:33:42
=======
 *    created: 24-October-2024  22:03:25
>>>>>>> 054cde753b070697a9706cdef62a19e41e2dde10
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
<<<<<<< HEAD
        for (int i = 1; i < n / 2; i++) {
            if (a[i] == a[i - 1] or a[n - i] == a[n - i - 1]) {
                swap(a[i], a[n - i - 1]);
            }
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans += a[i] == a[i + 1];
        }
        cout << ans << '\n';
=======
        for (int i = 0, j = n - 1; j > i; ++i, --j) {
            if (i) {
            if (a[i] == a[i - 1]) {
                swap(a[i], a[j]);
            }
            else if (j < n - 1) {
                if (a[j] == a[j + 1]) {
                swap(a[j], a[i]);
                }
            }
            }
        }
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                cnt++;
            }
        }
        cout << cnt << '\n';
>>>>>>> 054cde753b070697a9706cdef62a19e41e2dde10
    }
    return 0;
}