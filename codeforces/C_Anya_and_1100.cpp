/**
 *    author: A K M S Limon
 *    created: 02-November-2024  21:00:46
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size() - 3; i++) {
            if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
                cnt++;
            }
        }
        int q; cin >> q;
        while (q--) {
            int index, value;
            cin >> index >> value;
            int prev = 0, post = 0;
            for (int i = max(index - 4, 0); i < min(index, int(s.size() - 3)); i++) {
                if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
                    prev++;
                }
            }
            char ch = value + '0';
            s[index - 1] = ch;
            for (int i = max(index - 4, 0); i < min(index, int(s.size() - 3)); i++) {
                if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0') {
                    post++;
                }
            }
            cnt -= prev;
            cnt += post;
            if (cnt > 0) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}