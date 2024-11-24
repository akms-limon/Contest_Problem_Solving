/**
 *    author: A K M S Limon
 *    created: 13-November-2024  21:15:15
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int b[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        int p[n + 1];
        p[1] = 1, p[2] = n;
        for (int i = 3; i <= n; i++) {
            p[i] = i - 1;
        }
        int ans1 = 0, ans2 = 0;
        int mx = INT_MIN, mn = INT_MAX;
        for (int i = 1; i <= n; i++) {
            if (b[p[i]] == 1) {
                if (mx > p[i]) {
                    ans1 += 2;
                }
                else {
                    ans1++;
                    mx = p[i];
                }
            }
            else {
                if (mn < p[i]) {
                    ans1 += 2;
                }
                else {
                    ans1++;
                    mn = p[i];
                }
            }
        }
        mx = INT_MIN, mn = INT_MAX;
        swap(p[1], p[2]);
        for (int i = 1; i <= n; i++) {
            if (b[p[i]] == 1) {
                if (mx > p[i]) {
                    ans2 += 2;
                }
                else {
                    ans2++;
                    mx = p[i];
                }
            }
            else {
                if (mn < p[i]) {
                    ans2 += 2;
                }
                else {
                    ans2++;
                    mn = p[i];
                }
            }
        }
        cout << max(ans1, ans2) << '\n';
    }
    return 0;
}