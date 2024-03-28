/**
 *    author: A K M S Limon
 *    created: 10-March-2024  17:24:25
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int m; cin >> m;
        string s; cin >> s;
        int a[m];
        for (int i = 0; i < m; i++) {
            a[i] = s[i] - '0';
        }
        a[0] %= 3;
        for (int i = 1; i < m; i ++) {
            a[i] += a[i - 1];
            a[i] = a[i] % 3;
        }
        map<int, int> mp;
        for (int i = 0; i < m; i++) {
            mp[a[i]]++;
        }
        ll ans = 0;
        for (auto it : mp) {
            // cout << it.first << ' ' << it.second << '\n';
            if (it.first == 0) {
                ans += (1LL * it.second * (it.second + 1) / 2);
            }
            else {
                ans += (1LL * it.second * (it.second - 1) / 2);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}