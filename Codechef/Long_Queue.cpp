/**
 *    author: A K M S Limon
 *    created: 16-October-2024  20:37:16
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
        int cnt = 0, i = n - 2, x = a[n - 1] / 2;
        while (a[i] <= x) {
            cnt++;
            i--;
        }
        cout << n - cnt << '\n';
    }
    return 0;
}