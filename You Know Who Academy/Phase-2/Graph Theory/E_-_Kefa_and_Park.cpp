/**
 *    author: A K M S Limon
 *    created: 23-May-2024  13:58:26
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int biral[N];
bool vis[N];
int consecutive_biral[N];
int ans, n, m;

void dfs(int u, int p) {
    vis[u] = true;
    if (biral[u]) {
        consecutive_biral[u] += consecutive_biral[p] + 1;
    }
    else {
        consecutive_biral[u] = 0;
    }
    if (consecutive_biral[u] > m) {
        return;
    }
    bool is_leaf = true;
    for (auto it : g[u]) {
        if (!vis[it]) {
            dfs(it, u);
            is_leaf = false;
        }
    }
    if (is_leaf) ++ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> biral[i];
    }
    for (int i = 0; i < n; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0);
    cout << ans << '\n';
    return 0;
}