/**
 *    author: A K M S Limon
 *    created: 24-October-2024  22:03:25
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
    }
    return 0;
}