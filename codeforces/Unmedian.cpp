/**
 *    author: A K M S Limon
 *    created: 23-October-2024  21:33:41
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
        int mn = INT_MAX, mx = INT_MIN;
        int mx_ind, mn_ind;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= mx) {
                mx = a[i];
                mx_ind = i;
            }
            if (a[i] <= mn) {
                mn = a[i];
                mn_ind = i;
            }
        }
        if (mn_ind > mx_ind) {
            cout << -1 << '\n';
        }
        else {
            cout << n - 2 << '\n';
            for (int i = 0; i < n - 2; i ++) {
                cout << 1 << ' ' << 3 << '\n';
            }
        }
    }
    return 0;
}