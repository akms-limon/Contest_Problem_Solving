/**
 *    author: A K M S Limon
 *    created: 29-January-2024  22:45:24
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        vector<ll> v;
        for (ll i = 1; i * i <= n; i++) {
            if (!(n % i)) {
                v.push_back(i);
                if (n / i != i) {
                    v.push_back(n / i);
                }
            }
        }
        ll cnt = 0;
        for (ll i = 0; i < v.size(); i++) {
            for (ll j = 0; j < v.size(); j++) {
                if (v[i] <= a && v[j] <= b && !(n % (v[i] * v[j])) && (n / (v[i] * v[j])) <= c) {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}