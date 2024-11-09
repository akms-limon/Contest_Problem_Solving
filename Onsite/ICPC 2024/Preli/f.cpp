/**
 *    author: A K M S Limon
 *    created: 09-November-2024  16:21:00
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int s = (a + b + c);
        int area = (s * (s - a * 2) * (s - b * 2) * (s - c * 2));
        int gcd = __gcd(area, (4 * s * s));
        cout << area / gcd << "/" << (4 * s * s) / gcd << '\n';
    }
    return 0;
}
