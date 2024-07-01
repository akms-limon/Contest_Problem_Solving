/**
 *    author: A K M S Limon
<<<<<<< HEAD
 *    created: 10-June-2024  12:31:03
=======
 *    created: 05-June-2024  00:53:50
>>>>>>> d5cd3e9e0306de6a2df7901292f18651652d6b26
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

<<<<<<< HEAD
const int N = 1e5 + 9, inf = 1e9 + 10;
vector<int> g[N];
bool vis[N];
vector<int> dis(N, inf);

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int u, k; cin >> u >> k;
        while (k--) {
            int v; cin >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
    }
    queue<int> q;
    q.push(1);
    vis[1] = true;
    dis[1] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : g[u]) {
            if (!vis[v]) {
                q.push(v);
                dis[v] = dis[u] + 1;
                vis[v] = true;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << i << ' ' << (dis[i] == inf ? -1 : dis[i]) << '\n';
    }
=======
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    
>>>>>>> d5cd3e9e0306de6a2df7901292f18651652d6b26
    return 0;
}