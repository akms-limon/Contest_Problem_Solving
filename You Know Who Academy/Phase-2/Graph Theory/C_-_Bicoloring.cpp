/**
 *    author: A K M S Limon
 *    created: 19-May-2024  23:40:03
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e3;

vector<vector<int>> g;
bool vis[N];
int col[N];
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

    int n, m;
    for (int i = 0; ; i++) {
        cin >> n;
        if (n == 0) {
            break;
        }
        cin >> m;
        g.resize(n + 1);
        for (int j = 0; j < m; j++) {
            int a, b; cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        for (int temp = 0; temp <= n; temp++) {
            if (!vis[temp]) {
                dfs(temp);
            }
        }
        if (bl) {
            cout << "BICOLORABLE." << '\n';
        }
        else {
            cout << "NOT BICOLORABLE." << '\n';
        }
        g.clear();
        bl = true;
        for (int i = 0; i <= n; i++) {
            vis[i] = 0, col[i] = 0;
        }
    }
    return 0;
}