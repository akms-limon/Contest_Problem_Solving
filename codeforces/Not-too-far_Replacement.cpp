/**
 *    author: A K M S Limon
 *    created: 23-October-2024  20:38:56
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n + 1];
        for (int i = 0; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < n; j++) {
                if (a[n] * 2 >= a[j] && a[n] < a[j]) {
                    swap(a[n], a[j]);
                }
            }
        }
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        cout << sum << '\n';
    }
    return 0;
}