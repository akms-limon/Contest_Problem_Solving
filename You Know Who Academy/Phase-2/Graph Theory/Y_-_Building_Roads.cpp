/**
 *    author: A K M S Limon
 *    created: 20-May-2024  00:46:17
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 10;

vector<int> g[N];
int vis[N];

void dfs(int u) {
    vis[u] = 1;
    for (auto v : g[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int num_of_components = 0;
    vector<pair<int, int>> ans;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
        if (i != 1) {
            num_of_components++;
            ans.push_back({i - 1, i});
        }
        dfs(i);
       }
    }
    cout << num_of_components << '\n';
    for (int i = 0; i < (int) ans.size(); i++) {
        cout << ans[i].first << ' ' << ans[i].second << '\n';
    }
    return 0;
}