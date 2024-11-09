#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        map<int, int> total;
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            mp[a[i]]--;
            ll temp = mp[-a[i]];
            total[abs(a[i])]++;
            ll pore = n - total[abs(a[i])] - i;
            ans += temp * pore;
        }
        cout << ans << '\n';
    }
    return 0;
}