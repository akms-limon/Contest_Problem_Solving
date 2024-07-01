/**
 *    author: A K M S Limon
 *    created: 10-June-2024  13:10:00
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9, inf = 1e9 + 9;
vector<int> g[N];
vector<int> dis(N, inf);
int par[N];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    while (m--) {
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    dis[1] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (dis[u] + 1 < dis[v]) {
                dis[v] = dis[u] + 1;
                q.push(v);
                par[v] = u;
            }
        }
    }
    if (dis[n] == inf) {
        cout << "IMPOSSIBLE" << '\n';
    }
    else {
        cout << dis[n] + 1 << '\n';
        cout << n << ' ';
        while (par[n] != 1) {
            cout << par[n] << ' ';
            n = par[n];
        }
        cout << 1 << '\n';
    }
    return 0;
}