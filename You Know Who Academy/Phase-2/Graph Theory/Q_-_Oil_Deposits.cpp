/**
 *    author: A K M S Limon
 *    created: 19-May-2024  14:36:49
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e3 + 10;
char grid[N][N];
int n, m, cnt = 0;

void dfs(int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != '@') {
        return;
    }
    grid[i][j] = '*';
    dfs(i, j + 1);
    dfs(i, j - 1);
    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i + 1, j + 1);
    dfs(i - 1, j - 1);
    dfs(i - 1, j + 1);
    dfs(i + 1, j - 1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while (cin >> n >> m && m > 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '@') {
                    cnt++;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << '\n';
        cnt = 0;
    }
    return 0;
}