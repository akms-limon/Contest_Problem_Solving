/**
 *    author: A K M S Limon
<<<<<<< HEAD
 *    created: 17-October-2024  15:09:37
=======
 *    created: 16-October-2024  21:17:09
>>>>>>> 46f73dcf1cf9c7940ffaf59e0577aed7592f4443
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

<<<<<<< HEAD
int32_t main() {
=======
int main() {
>>>>>>> 46f73dcf1cf9c7940ffaf59e0577aed7592f4443
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
<<<<<<< HEAD
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
=======
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
>>>>>>> 46f73dcf1cf9c7940ffaf59e0577aed7592f4443
    }
    return 0;
}