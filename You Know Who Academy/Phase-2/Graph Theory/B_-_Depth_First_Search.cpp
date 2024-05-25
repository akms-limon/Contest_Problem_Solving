/**
 *    author: A K M S Limon
 *    created: 05-April-2024  23:36:02
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
int d[N], f[N];
int cnt = 1;

void dfs(int u) {
    vis[u] = true;
    d[u] = cnt++;
    for (auto v : g[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }
    f[u] = cnt++;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int index, k, a; cin >> index >> k;
        while(k--) {
            cin >> a;
            if (a)
            g[index].push_back(a);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << i << ' ' << d[i] << ' ' << f[i] << '\n';
    }
    return 0;
}