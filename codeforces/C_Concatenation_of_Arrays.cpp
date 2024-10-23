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
        vector<pair<int, pair<int, int>>> v;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            v.push_back({a + b, {a, b}});
        }
        sort(v.begin(), v.end());
        for (auto it : v) {
            cout << it.second.first << ' ' << it.second.second << ' ';
        }
        cout << '\n';
    }
    return 0;
}