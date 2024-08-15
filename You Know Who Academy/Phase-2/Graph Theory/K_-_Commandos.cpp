/**
 *    author: A K M S Limon
 *    created: 09-July-2024  09:29:11
**/
#include <bits/stdc++.h>
#define ll long long
#define inf 1e9
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, cs = 1; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        set <int> st;
        for (int i = 0; i < k; i++) {
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
            st.insert(u);
            st.insert(v);
        }
        int s, e; cin >> s >> e;
        queue<int> q;
        vector<int> dis(N, inf), dis1(N, inf);
        q.push(s);
        dis[s] = 0;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (auto v : g[u]) {
                if (dis[u] + 1 < dis[v]) {
                    dis[v] = dis[u] + 1;
                    q.push(v);
                }
            }
        }
        q.push(e);
        dis1[e] = 0;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            for (auto v : g[u]) {
                if (dis1[u] + 1 < dis1[v]) {
                    dis1[v] = dis1[u] + 1;
                    q.push(v);
                }           
            }
        }
        int ans = 0;
        for (auto it : st) {
            ans = max(ans, dis[it] + dis1[it]);
        }
        cout << "Case " << cs++ << ": " << ans << '\n';
        for (auto it : st) {
            dis[it] = inf, dis1[it] = inf;
            g[it].clear();
        }
    }
    return 0;
}