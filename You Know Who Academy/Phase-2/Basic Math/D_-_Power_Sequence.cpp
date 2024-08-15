/**
 *    author: A K M S Limon
 *    created: 02-March-2024  07:41:52
 **/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    bool bl = false;
    ll ans = LONG_LONG_MAX;
    ll mx = 1e14;
    for (ll c = 1; c <= 1000000; c++) {
        ll p = 1, next = 0;
        bool flag = true;
        for (ll i = 0; i < n; i++) {
            if (p > mx) {
                flag = false;
                break;
            }
            next += abs(a[i] - p);
            p *= c;
        }
        if (flag) {
            ans = min(ans, next);
        }
    }
    cout << ans << '\n';
    return 0;
}