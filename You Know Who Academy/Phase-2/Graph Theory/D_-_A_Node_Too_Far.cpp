/**
 *    author: A K M S Limon
 *    created: 14-June-2024  20:03:54
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int inf = 1e9 + 9;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, cs = 1;
    while (cin >> n && n) {
        map<int, vector<int>> g;
        set<int> nodes;
        map<int,int> dis;
        for (int i = 0; i < n; i++) {
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
            nodes.insert(u);
            nodes.insert(v);
        }
        int node, k;
        while (cin >> node >> k && !(node == 0 && k == 0)) {
            for (auto it : nodes) {
                dis[it] = inf;
            }
            queue<int> q;
            q.push(node);
            dis[node] = 0;
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (auto v : g[u]) {
                    if (dis[v] > dis[u] + 1) {
                        dis[v] = dis[u] + 1;
                        q.push(v);
                    }
                }
            }
            int not_reachable = 0;
            for (auto it : nodes) {
                if (dis[it] > k) {
                    not_reachable++;
                }
            }
            cout << "Case " << cs++ << ": " << not_reachable << " nodes not reachable from node " << node << " with TTL = " << k << "." << '\n';
        }
    }
    return 0;
}