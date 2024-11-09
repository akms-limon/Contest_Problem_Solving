/**
 *    author: A K M S Limon
 *    created: 02-November-2024  20:43:04
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < k; i++) {
            int x, y; cin >> x >> y;
            mp[x] += y;
        }
        int cnt = 0, ans = 0;
        vector<pair<int, int>> v;
        for (auto it : mp) {
            v.push_back({it.second, it.first});
        }
        sort(v.rbegin(), v.rend());
        for (auto it : v) {
            if (cnt == n) {
                break;
            }
            ans += it.first;
            cnt++;
        }
        cout << ans << '\n';
    }
    return 0;
}