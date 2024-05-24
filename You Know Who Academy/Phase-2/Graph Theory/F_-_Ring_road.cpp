/**
 *    author: A K M S Limon
 *    created: 23-May-2024  14:53:01
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
vector<pair<int, int>> g[N];
int vis[N];
int cost = 0, temp;

void dfs(int u, int par = 0) {
    vis[u] = true;
    for (auto [v, w] : g[u]) {
        if (!vis[v]) {
            cost += w;
            dfs(v, u);
        }
        if (v == 1 && par != 1) {
            temp = w;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int u, v, w; cin >> u >> v >> w;
        g[u].push_back({v, 0});
        g[v].push_back({u, w});
        total += w;
    }
    dfs(1);
    cost += temp;
    cout << min(cost, total - cost) << '\n';
    return 0;
}