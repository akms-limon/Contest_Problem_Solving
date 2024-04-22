/**
 *    author: A K M S Limon
 *    created: 12-April-2024  16:08:31
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    int cs = 1;
    while (t--) {
        int n, q; cin >> n >> q;
        map<int, int> mp;
        vector<pair<int, int>> v, ans;
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            mp[a]++;
            mp[b + 1]--;
        }
        for (auto it : mp) {
            v.push_back(make_pair(it.first, it.second));
        }
        for (int i = 1; i < v.size(); i++) {
            v[i].second += v[i - 1].second;
        }
        for (int i = 0; i < v.size() - 1; i++) {
            ans.push_back({v[i].first, v[i].second});
            if (v[i].second != v[i + 1].second && v[i].first + 1 != v[i + 1].first) {
                ans.push_back({v[i + 1].first - 1, v[i].second});
            } 
        }
        cout << "Case " << cs++ << ":\n";
        for (int i = 0; i < q; i++) {
            int query; cin >> query;
            pair<int, int> p = {query, 0};
            int x = lower_bound(ans.begin(), ans.end(), p) - ans.begin();
            cout << ans[x].second << '\n';
        }
    }
    return 0;
}