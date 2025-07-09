/**
 *    author: A K M S Limon
 *    created: 17-October-2024  00:03:35
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 9, inf = 1e10 + 7;
int n, k, dp[N], h[N];

int frog(int n) {
    if (n == 0) return 0;
    if (n < 0) return inf;
    int ans = INT_MAX;
    if (dp[n] != -1) return dp[n];
    for (int i = 1; i <= k; i++) {
        ans = min(ans, frog(n - i) + abs(h[n - i] - h[n]));
    }
    return dp[n] = ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    memset(dp, -1, sizeof dp);
    cout << frog(n - 1) << '\n';
    return 0;
}