/**
 *    author: A K M S Limon
 *    created: 17-October-2024  15:09:37
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        int a[n]; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int c[n], b[n];
        int lo = 0, hi = 1e9;
        int ans = INT_MAX;
        while (lo < hi) {
            bool bl = true;
            int mid = (lo + hi) / 2;
            c[0] = a[0] + mid;
            for (int i = 1; i < n; i++) {
                if (c[i - 1] + x < a[i] - mid) {
                    bl = false;
                    break;
                }
                else {
                    c[i] = min(c[i - 1] + x, a[i] + mid);
                }
            }
            if (bl) {
                if (mid <= ans) {
                    ans = mid;
                    for (int i = 0; i < n; i++) {
                        b[i] = c[i];
                    }
                }
            }
            if (bl) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        cout << lo << '\n';
        for (int i = 0; i < n; i++) {
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}