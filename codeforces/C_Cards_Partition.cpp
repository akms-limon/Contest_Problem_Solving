/**
 *    author: A K M S Limon
 *    created: 27-September-2024  20:43:55
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        ll a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        cout << sum + k << '\n';
    }
    return 0;
}