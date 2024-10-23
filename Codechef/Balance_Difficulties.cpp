/**
 *    author: A K M S Limon
 *    created: 16-October-2024  21:17:09
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n], c[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << 0 << '\n' << a[0] << '\n';
            return 0;
        }
        int b[n], d[n];
        b[0] = ((a[0] + a[1]) / 2);
        c[0] = ((a[0] + a[1]) / 2) - (k / 2);
        d[0] = ((a[0] + a[1]) / 2) + (k / 2);
        for (int i = 1; i < n; i++) {
            b[i] = b[i - 1] + k;
            c[i] = c[i - 1] + k;
            d[i] = d[i - 1] + k;
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            ans = max(abs(a[i] - b[i]), ans);
        }
        int ans1 = INT_MIN;
        for (int i = 0; i < n; i++) {
            ans1 = max(abs(a[i] - c[i]), ans1);
        }
        int ans3 = INT_MIN;
        for (int i = 0; i < n; i++) {
            ans3 = max(abs(a[i] - d[i]), ans);
        }
        if (ans <= ans1 && ans <= ans3) {
            cout << ans << '\n';
            for (int i = 0; i < n; i++) {
                cout << b[i] << ' ';
            }
            cout << '\n';
        }
        else if (ans1 <= ans && ans1 <= ans3) {
            cout << ans1 << '\n';
            for (int i = 0; i < n; i++) {
                cout << c[i] << ' ';
            }
            cout << '\n';
        }
        else {
            cout << ans3 << '\n';
            for (int i = 0; i < n; i++) {
                cout << d[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}