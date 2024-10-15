/**
 *    author: A K M S Limon
 *    created: 28-August-2024  02:17:34
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
bool col[N];

void dfs(int u) {
    vis[u] = true;
    for (auto v : g[u]) {
        if (!vis[v]) {
            col[v] = col[u] ^ 1;
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for (auto it : g) {
        for (auto nd : it) {
            if (!vis[nd]) {
                dfs(nd);
            }
        }
    }
    ll ans = 0, total = 0;
    for (int i = 1; i <= n; i++) {
        if (!col[i]) {
            total++;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (col[i]) {
            ans += (total - g[i].size());
        }
    }
    cout << ans << '\n';
    return 0;
}