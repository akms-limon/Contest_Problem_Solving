/**
 *    author: A K M S Limon
 *    created: 13-April-2024  20:53:20
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int k, n; cin >> k >> n;
        int b[k], a[n];
        for (int i = 0; i < k; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= b[0]) {
                cout << b[0] - 1 << ' ';
            }
            else {
                cout << a[i] << ' ';
            }
        }
        cout << '\n';
    }
      
    return 0;
}