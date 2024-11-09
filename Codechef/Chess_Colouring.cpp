/**
 *    author: A K M S Limon
 *    created: 06-November-2024  21:12:30
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        if (n % 2 == 0) cout << 2 << '\n';
        else  cout << ((n * n) / 2) + 2 << '\n';
    }
    return 0;
}