/**
 *    author: A K M S Limon
 *    created: 02-October-2024  14:44:25
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, cs = 1; cin >> t;
    while (t--) {
        int n; cin >> n;
        int xr = 0, one = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            xr ^= x;
            if (x == 1) {
                one++;
            }
        }
        cout << "Case " << cs++ << ": ";
        if (one == n) {
            if (n % 2) {
                cout << "Bob" << '\n';
            }
            else {
                cout << "Alice" << '\n';
            }
        }
        else {
            if (xr == 0) {
                cout << "Bob" << '\n';
            }
            else {
                cout << "Alice" << '\n';
            }
        }
    }
    return 0;
}