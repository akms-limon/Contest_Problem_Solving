/**
 *    author: A K M S Limon
 *    created: 22-February-2024  22:56:55
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 5e4 + 9;
const ll mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<ll>spf(N);
    for (ll i = 1; i < N; i++) {
        spf[i] = i;
    }
    for (ll i = 2; i < N; i++) {
        if (spf[i] == i) {
            for (ll j = i; j < N; j += i) {
                spf[j] = min(i, spf[j]);
            }
        }
    }

    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll ans = 1;
        vector<ll> mp(n + 1, 0);
        for (ll i = 1; i <= n; i++) {
            ll temp = i;
            while (temp > 1) {
                ll sd = spf[temp];
                mp[sd] ++;
                temp /= sd;
            }
        }
        for (auto it : mp) {
            cout << it << ' ';
            ans = (1LL * (ans % mod) * (it + 1)) % mod;
        }
        cout << ans << '\n';
    }
    return 0;
}