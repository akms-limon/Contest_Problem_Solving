/**
 *    author: A K M S Limon
 *    created: 23-October-2024  20:46:42
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') cnt++;
        }
        if (cnt == 0) cout << n << "\n";
        else cout << cnt % 2 << '\n';
    }
    return 0;
}