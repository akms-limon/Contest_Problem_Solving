/**
 *    author: A K M S Limon
 *    created: 20-October-2024  15:54:15
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<pair<int, int>, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            mp[{a, b}] = 0;
            v.push_back(a);
            v.push_back(b);
        }
        sort(v.begin(), v.end());
        for (auto &it : mp) {
            int x = upper_bound(v.begin(), v.end(), it.first.first) - v.begin();
            x = 2 * n - x;
            int y = upper_bound(v.begin(), v.end(), it.first.second) - v.begin();
            y = 2 * n - y;
            it.second += (x + y);
        }
        for (auto it : mp) {
            cout << it.first.first << ' ' << it.first.second << ' ';
        }
        cout << '\n';
    }
    return 0;
}