/**
 *    author: A K M S Limon
 *    created: 28-August-2024  01:32:04
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2000 + 10;
vector<int> g[N];
bool vis[N];
bool col[N];
bool bl = true;

void dfs(int u) {
    vis[u] = true;
    for (auto v : g[u]) {
        if (!vis[v]) {
            col[v] = col[u] ^ 1;
            dfs(v);
        }
        else {
            if (col[v] == col[u]) {
                bl = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, cs = 1; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        for (int i = 0; i < m; i++) {
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
        cout << "Scenario #";
        if (bl) {
            cout << cs++ << ":\n" << "No suspicious bugs found!\n";
        }
        else {
            cout << cs++ << ":\n" << "Suspicious bugs found!\n";
        }
        fill(vis, vis + N, 0);
        fill(col, col + N, 0);
        fill(g, g + N, vector<int>());
        bl = true;
    }
    return 0;
}