/**
 *    author: A K M S Limon
 *    created: 25-October-2024  23:32:14
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;
const int N = 1e6 + 7;
int dp[N];

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= 6; k++) {
            dp[i] = (dp[i] + (i - k < 0 ? 0 : dp[i - k])) % mod;
        }
    }
    cout << dp[n] << '\n';
    return 0;
}