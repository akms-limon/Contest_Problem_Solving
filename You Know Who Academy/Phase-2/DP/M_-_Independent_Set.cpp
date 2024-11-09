/**
 *    author: A K M S Limon
 *    created: 23-October-2024  11:29:27
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9, mod = 1e9 + 7;
int dp[N][2];
vector<int> g[N];

void dfs(int u, int p) {
    dp[u][0] = 1;
    dp[u][1] = 1;
    for (auto v : g[u]) {
        if (v != p) {
            dfs(v, u);
            dp[u][0] = 1LL * dp[u][0] * (dp[v][0] + dp[v][1]) % mod;
            dp[u][1] = 1LL * dp[u][1] * dp[v][0] % mod;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout << (dp[1][0] + dp[1][1]) % mod << '\n';
    return 0;
}