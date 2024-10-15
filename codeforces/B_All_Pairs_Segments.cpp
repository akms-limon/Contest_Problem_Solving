/**
 *    author: A K M S Limon
 *    created: 27-September-2024  20:04:12
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t; cin >> t;
    while (t--) {
        ll n, q; cin >> n >> q;
        ll a[n];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll seg[n];
        ll x = 0, y = 1, z = n - 1;
        for (int i = n - 1; i >= 0; i--) {
            seg[i] = x + (y * z);
            x++, y++, z--;
        }
        for (int i = 0; i < n - 1; i++) {
            mp[seg[i]]++;
            mp[seg[i] - i] += (a[i + 1] - a[i] - 1);
        }
        mp[seg[n - 1]]++;
        while (q--) {
            ll x; cin >> x;
            cout << mp[x] << ' ';
        }
        cout << '\n';
    }
    return 0;
}