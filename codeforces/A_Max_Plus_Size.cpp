/**
 *    author: A K M S Limon
 *    created: 27-September-2024  19:37:57
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
        int first = INT_MIN, second = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i % 2) {
                second = max(second, a[i]);
            }
            else {
                first = max(first, a[i]);
            }
        }
        cout << max(first + (n + 1) / 2, second + n / 2) << '\n';
    }
    return 0;
}