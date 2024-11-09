/**
 *    author: A K M S Limon
 *    created: 08-November-2024  16:39:56
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        char c1, c2; cin >> c1 >> c2;
        for (int i = 1; i <= 94; i++) {
            if (int(c1 - 32) % i == int(c2 - 32) % i) {
                cout << i << ' ' << (94 + i - 1) / i << '\n';
            }
        }
        cout << '\n';
    }
    return 0;
}