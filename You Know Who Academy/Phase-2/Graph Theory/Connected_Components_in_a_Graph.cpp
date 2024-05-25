/**
 *    author: A K M S Limon
 *    created: 14-May-2024  01:20:04
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];
int vis[N];

void dfs(int u) {
    vis[u] = true;
    for (auto it : g[u]) {
        if (!vis[it]) {
            dfs(it);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    set<int> s;
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        s.insert(u);
        s.insert(v);
    }
    while (s.size() < n) {
        s.insert((s.size() + 1));
    }
    int cnt = 0;
    for (auto it : s) {
        if (!vis[it]) {
            cnt++;
            dfs(it);
        }
    }
    cout << cnt << '\n';
    return 0;
}