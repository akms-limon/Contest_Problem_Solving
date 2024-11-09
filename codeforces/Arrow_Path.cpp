/**
 *    author: A K M S Limon
 *    created: 23-October-2024  20:25:02
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s[2];
        cin >> s[0] >> s[1];
        vector<vector<int>> dp(2, vector<int> (n, false));
        dp[0][0] = true;
        for (int i = 1; i < n; i++) {
            if (i == 1) {
                if (s[1][0] == '>') {
                    dp[1][1] = true;
                }
            }
            else {
                if (s[0][i - 1] == '>' && (dp[0][i - 2] || dp[1][i - 1])) {
                    dp[0][i] = true;
                }
                if (s[1][i - 1] == '>' && (dp[0][i - 1] || dp[1][i - 2])) {
                    dp[1][i] = true;
                }
            }
        }
        if (dp[1][n - 1]) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}