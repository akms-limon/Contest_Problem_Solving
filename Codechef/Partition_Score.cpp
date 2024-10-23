/**
 *    author: A K M S Limon
 *    created: 16-October-2024  20:52:10
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        if (k == 1) {
            cout << a[n - 1] * 2 + a[n - 2] + a[0] << '\n';
        }
        else {
            cout << a[0] + a[n - 1] + a[n - 2] + a[n - k - 1] << '\n';
        }
    }
    return 0;
}