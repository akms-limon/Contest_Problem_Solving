/**
 *    author: A K M S Limon
 *    created: 30-April-2024  22:59:51
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        ll curr = a[0];
        int i;
        for (i = 1; i < n; i++) {
            ll diff = a[i] - a[i - 1];
            if (diff * i <= k) {
                curr = a[i];
                k -= (diff * i);
            }
            else {
                curr += (k / i);
                k %= i;
                break;
            }
        }
        curr += (k / n);
        k %= n;
        ll ans =(n * curr) + k - (n - 1) + (n - i);
        cout << ans << '\n';
    }
    return 0;
}