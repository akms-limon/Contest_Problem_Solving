/**
 *    author: A K M S Limon
 *    created: 14-October-2024  21:01:28
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<pair<int, int>> v;
        for (auto it : mp) {
            v.push_back(make_pair(it.first, it.second));
        }
        set<int> st;
        int cnt = v[0].second, ans = cnt;
        st.insert(v[0].first);
        for (int i = 1; i < v.size(); i++) {
            if (v[i].first > v[i - 1].first + 1) {
                ans = max(cnt, ans);
                cnt = v[i].second;
                st.clear();
                st.insert(v[i].first);
                ans = max(cnt, ans);
            }
            else {
                if (st.size() < k) {
                    st.insert(v[i].first);
                    cnt += v[i].second;
                    ans = max(cnt, ans);
                }
                else {
                    cnt -= v[i - k].second;
                    cnt += v[i].second;
                    st.erase(v[i - k].first);
                    st.insert(v[i].first);
                    ans = max(cnt, ans);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}