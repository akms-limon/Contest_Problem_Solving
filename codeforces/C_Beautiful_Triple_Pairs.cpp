/**
 *    author: A K M S Limon
 *    created: 20-May-2024  21:29:31
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<pair<int, pair<int, int>>> v;
        for (int i = 0; i < n - 2; i++) {
            v.push_back({a[i], {a[i + 1], a[i + 2]}});
        }
        ll ans = 0;
        map<pair<int, int>, map<int, int>> mp;
        for (int i = 0; i < v.size(); i++) {
            mp[{v[i].first, v[i].second.first}][v[i].second.second]++;
        }
        for (auto it : mp) {
            vector<int> tv;
            for (auto xx : it.second) {
                tv.push_back(xx.second);
            }
            ll temp = 0, pre = tv[0];
            for (int i = 1; i < tv.size(); i++) {
                temp += (tv[i] * pre);
                pre += tv[i];
            }
            if (tv.size() > 1)
            ans += temp;
        }
        map<pair<int, int>, map<int, int>> mp1;
        for (int i = 0; i < v.size(); i++) {
            mp1[{v[i].first, v[i].second.second}][v[i].second.first]++;
        }
        for (auto it : mp1) {
            vector<int> tv;
            for (auto xx : it.second) {
                tv.push_back(xx.second);
            }
            ll temp = 0, pre = tv[0];
            for (int i = 1; i < tv.size(); i++) {
                temp += (tv[i] * pre);
                pre += tv[i];
            }
            if (tv.size() > 1)
            ans += temp;
        }
        map<pair<int, int>, map<int, int>> mp2;
        for (int i = 0; i < v.size(); i++) {
            mp2[{v[i].second.first, v[i].second.second}][v[i].first]++;
        }
        for (auto it : mp2) {
            vector<int> tv;
            for (auto xx : it.second) {
                tv.push_back(xx.second);
            }
            ll temp = 0, pre = tv[0];
            for (int i = 1; i < tv.size(); i++) {
                temp += (tv[i] * pre);
                pre += tv[i];
            }
            if (tv.size() > 1)
            ans += temp;
        }
        cout << ans << '\n';
    }
    return 0;
}