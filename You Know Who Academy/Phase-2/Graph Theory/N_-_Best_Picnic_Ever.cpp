/**
 *    author: A K M S Limon
 *    created: 10-July-2024  23:50:59
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e3 + 10;
vector<int> g[N];
vector<int> vis(N);
vector<int> people_count(N);

void dfs(int u) {
    for (auto v : g[u]) {
        if (!vis[v]) {
            vis[v] = true;
            people_count[v]++;
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, cs = 1; cin >> t;
    while (t--) {
        int k, n, m; cin >> k >> n >> m;
        multiset<int> s;
        for (int i = 0; i < k; i++) {
            int x; cin >> x;
            s.insert(x);
            people_count[x]++;
        }
        for (int i = 0; i < m; i++) {
            int u, v; cin >> u >> v;
            g[u].push_back(v);
        }
        for (auto it : s) {
            vis[it] = true;
            dfs(it);
            for (int i = 0; i <= n; i++) {
                vis[i] = false;
            }
        }
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            if (people_count[i] == s.size()) {
                ans++;
            }
        }
        cout << "Case " << cs++ << ": " << ans << '\n';
        g->erase(g->begin(), g->end());
        g->resize(0);
        people_count.clear();
        people_count.resize(N);
        vis.clear();
        vis.resize(N);
    }
    return 0;
}