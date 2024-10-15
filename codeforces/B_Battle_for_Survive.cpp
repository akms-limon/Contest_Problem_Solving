/**
 *    author: A K M S Limon
 *    created: 20-September-2024  20:47:52
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
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i < n - 2) {
                sum += a[i];
            }
        }
        cout << a[n - 1] - (a[n - 2] - sum) << '\n';
    }
    return 0;
}