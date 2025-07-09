/**
 *    author: A K M S Limon
 *    created: 25-October-2024  23:48:14
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int a, b, c, d, e, f, n;
const int N = 1e4 + 7;
const int mod = 10000007;
int dp[N];

int fn(int n) {
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if (dp[n] != -1) return dp[n];
    return dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6)) % mod;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, cs = 1; cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d >> e >> f >> n;
        memset(dp, -1, sizeof dp);
        cout << "Case " << cs++ << ": " << fn(n) % mod << '\n';
    }
    return 0;
}
