/**
 *    author: A K M S Limon
 *    created: 14-October-2024  20:38:30
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        string s1, s2; cin >> s1 >> s2;
        int cnt = 0, i = 0;
        while (s1[i] == s2[i] && i < s1.size() && i < s2.size()) {
            cnt++;
            i++;
        }
        int ans = s1.size() + s2.size();
        if (cnt > 0) {
            ans -= cnt;
            ans += 1;
        }
        cout << ans << '\n';
    }
    return 0;
}