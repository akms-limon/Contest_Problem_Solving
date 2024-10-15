/**
 *    author: A K M S Limon
 *    created: 28-August-2024  02:57:45
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1010;
char matrix[N][N];
int n, m, cnt = 0;

void dfs(int sr, int sc) {
    if (sr < 0 || sc < 0 || sr >= n || sc >= m || matrix[sr][sc] != '.') {
        return;
    }
    matrix[sr][sc] = '#';
    dfs(sr, sc + 1);
    dfs(sr + 1, sc);
    dfs(sr - 1, sc);
    dfs(sr, sc - 1);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == '.') {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}