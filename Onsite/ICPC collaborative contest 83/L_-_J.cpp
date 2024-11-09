/**
 *    author: A K M S Limon
 *    created: 25-October-2024  15:41:46
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (a[i] - a[0] > a[0]) {
            a[i] %= (a[i] - a[0]);
        }
    }
    int gcd = 0;
    for (int i = 0; i < n; i++) {
        gcd = __gcd(a[i], gcd);
    }
    int x = (a[0] + 1) / 2;
    for (int i = 0; i < n; i++) {
        if (a[i] % x != 0) 
        a[i] %= x;
    }
    int gcd2 = 0;
    for (int i = 0; i < n; i++) {
        gcd2 = __gcd(gcd2, a[i]);
    }
    cout << max(gcd, gcd2) << '\n';
    return 0;
}