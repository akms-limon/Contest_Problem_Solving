/**
 *    author: A K M S Limon
 *    created: 26-September-2024  18:15:49
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mx = 1e5 + 5;
const int L = 20;
vector<vector<int>> mtrx;
int U[mx][L];
int D[mx];

void dfs(int n, int par) {
    U[n][0] = par;
    for (int i = 1; i < L; i++) {
        if (U[n][i - 1] != -1)
            U[n][i] = U[U[n][i - 1]][i - 1];
        else
            U[n][i] = -1;
    }
    
    for (int nb : mtrx[n]) {
        if (nb != par) {
            D[nb] = D[n] + 1;
            dfs(nb, n);
        }
    }
}

int lca(int u, int v) {
    if (D[u] < D[v])
        swap(u, v);
    for (int i = L - 1; i >= 0; i--) {
        if (U[u][i] != -1 && D[U[u][i]] >= D[v])
            u = U[u][i];
    }
    if (u == v)
        return u;
    for (int i = L - 1; i >= 0; i--) {
        if (U[u][i] != U[v][i]) {
            u = U[u][i];
            v = U[v][i];
        }
    }
    
    return U[u][0];
}

int get_kth_ancestor(int n, int k) {
    for (int i = 0; i < L; i++) {
        if (k & (1 << i)) {
            n = U[n][i];
            if (n == -1) break;
        }
    }
    return n;
}

int find_middle_city(int u, int v) {
    int an = lca(u, v);
    int distance = D[u] + D[v] - 2 * D[an];
    int k = distance / 2;

    if (D[u] - D[an] >= k) {
        return get_kth_ancestor(u, k);
    } else {
        int remaining = k - (D[u] - D[an]);
        return get_kth_ancestor(v, D[v] - D[an] - remaining);
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n, q;
        cin >> n;
        mtrx.assign(n+1,{});
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            mtrx[u].push_back(v);
            mtrx[v].push_back(u);
        }
        memset(U, -1, sizeof(U));
        D[1] = 0;
        dfs(1, -1);
        cin >> q;
        while (q--) {
            int u, v;
            cin >> u >> v;
            int middle_city = find_middle_city(u, v);
            cout << middle_city << '\n';
        }
    }
    return 0;
}
