/**
 *    author: A K M S Limon
 *    created: 19-May-2024  22:56:08
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e2 + 10;

int a[N][N];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int index, cnt; cin >> index >> cnt;
        while (cnt--) {
            int x; cin >> x;
            a[index][x] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j];
            if (j != n) {
                cout << ' ';
            }
            else {
                cout << '\n';
            }
        }
    }
    return 0;
}