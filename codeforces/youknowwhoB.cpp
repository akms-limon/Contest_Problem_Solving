/**
 *    author: A K M S Limon
 *    created: 18-October-2024  15:14:50
**/
#include <bits/stdc++.h>
#define ll __int128_t
using namespace std;

map<int, int> mp;

void cal(vector<pair<int, ll>> &v) {
    ll x = v.size() / 2, temp_sum = 0, total_sum = 0, sum = 0;
    for (int i = 0; i < x; i++) {
        int p = v[i].second;
        total_sum += v[i].second;
        v[i].second = (total_sum * (total_sum + 1)) - (temp_sum * (temp_sum + 1));
        temp_sum += p;
    }
    temp_sum = 0, total_sum = 0;
    for (int i = v.size() - 1; i >= x; i--) {
        int p = v[i].second;
        total_sum += p;
        v[i].second = (total_sum * total_sum) - (temp_sum * temp_sum);
        temp_sum += p;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int a[n];
    vector<pair<int, ll>> v;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto it : mp) {
        v.push_back(make_pair(it.first, it.second));
    }
    for (int i = 0; i < 3; i++) {
        cal(v);
    }
    ll sum = 0;
    for (auto it : v) {
        sum += it.second;
    }
    sum /= 2;
    ll ans = 0;
    int index;
    for (int i = 0; i < v.size(); i++) {
        ans += v[i].second;
        if (ans >= sum) {
            index = i;
            break;
        }
    }
    cout << v[index].first << '\n';
    return 0;
}