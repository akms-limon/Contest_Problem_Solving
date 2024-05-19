/**
 *    author: A K M S Limon
 *    created: 20-May-2024  01:25:23
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e3 + 10;
vector<int> g[N];
int vis[N], money[N];
bool bl = true;
ll total = 0, cnt = 0;

void dfs(int u) {
    vis[u] = true;
    total += money[u];
    cnt ++;
    for (auto v : g[u]) {
        if (!vis[v]) {
            dfs(v);
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t, cs = 1; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        ll sum = 0;
        set<int> st;
        for (int i = 1; i <= n; i++) {
            cin >> money[i];
            sum += money[i];
        }
        if (sum % n != 0) {
            bl = false;
        }
        int ans = sum / n;
        for (int i = 0; i < m; i++) {
            int a, b; cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
            st.insert(a);
            st.insert(b);
        }
        for (auto it : st) {
            if (!vis[it]) {
                dfs(it);
                if (total % cnt != 0 || total / cnt != ans) {
                    bl = false;
                }
                total = 0, cnt = 0;
            }
        }
        cout << "Case " << cs++ << ": ";
        if (bl) {
            cout << "Yes" << '\n';
        }
        else {
            cout << "No" << '\n';
        }
        for (int i = 0; i <= n; i++) {
            g[i].clear();
            vis[i] = 0;
            money[i] = 0;
        }
        bl = true;
    }
    return 0;
}