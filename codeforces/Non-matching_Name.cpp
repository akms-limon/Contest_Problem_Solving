/**
 *    author: A K M S Limon
 *    created: 23-October-2024  20:31:53
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        string sa, sb; cin >> sa >> sb;
        map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[sa[i]]++;
        }
        for (int i = 0; i < m; i++) {
            mp[sb[i]]++;
        }
        if (mp.size() == 26) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}