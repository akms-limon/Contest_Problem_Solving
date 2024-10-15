/**
 *    author: A K M S Limon
 *    created: 07-October-2024  12:32:42
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll p, q; cin >> p >> q;
        ll x, y; cin >> x >> y;
        ll a = (n * p) - (x * ((n * (n - 1)) / 2));
        ll b = (n * q) - (y * ((n * (n - 1)) / 2));
        cout << min(a, b) << '\n';
    }
    return 0;
}