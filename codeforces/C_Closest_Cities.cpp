/**
 *    author: A K M S Limon
 *    created: 01-February-2024  13:09:16
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n; 
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll ans = 0;
        vector<ll> v1, v2;
        v1.push_back(0);
        v2.push_back(0);
        for (ll i = 0; i < n - 1; i++) {
            ll x = LONG_LONG_MAX, y;
            if (i != 0) {
                x = abs(arr[i] - arr[i - 1]);
            }
            y = abs(arr[i] - arr[i + 1]);
            if (x < y) {
                ans+= y;
            }
            else {
                ans++;
            }
            v1.push_back(ans);
        }
        ans = 0;
        for (ll i = n - 1; i >= 1; i--) {
            ll x = LONG_LONG_MAX, y;
            if (i != n - 1) {
                x = abs(arr[i] - arr[i + 1]);
            }
            y = abs(arr[i] - arr[i - 1]);
            if (x < y) {
                ans+= y;
            }
            else {
                ans++;
            }
            v2.push_back(ans);
        }
        sort(v2.rbegin(), v2.rend());
        ll q; cin >> q;
        while (q--) {
            ll a, b; cin >> a >> b;
            if (a < b) {
                cout << v1[b - 1] - v1[a - 1] << '\n';
            }
            else {
                cout << v2[b - 1] - v2[a - 1] << '\n';
            }
        }
    }
    return 0;
}