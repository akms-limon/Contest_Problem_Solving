/**
 *    author: A K M S Limon
 *    created: 24-October-2024  20:54:42
 **/
#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
#define int long long
=======
#define ll long long
>>>>>>> 054cde753b070697a9706cdef62a19e41e2dde10

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 1];
        a[0] = 0;
        set<int> s;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            a[i] += a[i - 1];
        }
<<<<<<< HEAD
        int ans = 0;
=======
        ll ans = 0;
>>>>>>> 054cde753b070697a9706cdef62a19e41e2dde10
        for (int i = 0; i <= n; i++) {
            if (s.find(a[i]) != s.end()) {
                ans++;
                s.clear();
            }
            s.insert(a[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}