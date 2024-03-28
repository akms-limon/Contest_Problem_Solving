/**
 *    author: A K M S Limon
 *    created: 14-March-2024  23:54:28
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mx = *max_element(a, a + n);
    int gcd = 0;
    for (int i = 0; i < n; i++) {
        int temp = (mx - a[i]);
        gcd = __gcd(gcd, mx - a[i]);
    }
    ll ans = 0;
    for (int i  = 0; i < n; i++) {
        ans += (mx - a[i]) / gcd;
    }
    cout << ans << " " << gcd << '\n';
    return 0;
}