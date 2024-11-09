/**
 *    author: A K M S Limon
 *    created: 06-November-2024  20:34:32
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<int> v;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= b[i]) {
                v.push_back(b[i] - a[i] + 1);
            }
            else {
                ans++;
            }
        }
        sort(v.begin(), v.end());
        int i = 0;
        int total = (n + 1) / 2;
        while (ans < total) {
            if (v[i] <= k) {
                k -= v[i];
                i++;
                ans++;
            }
            else {
                break;
            }
        }
        if (ans >= total) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}