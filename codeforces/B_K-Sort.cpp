/**
 *    author: A K M S Limon
 *    created: 30-June-2024  22:18:50
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll ans = 0, mx = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                ll temp = a[i - 1] - a[i];
                ans += temp;
                mx = max(mx, temp);
                a[i] = a[i - 1];
            }
        }
        cout << ans + mx << '\n';
    }
    return 0;
}