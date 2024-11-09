/**
 *    author: A K M S Limon
 *    created: 24-October-2024  20:54:42
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

#include <iostream>
using namespace std;

ll solve(vector<vector<int>> &matrix, int n) {
    ll ans = 0;
    for (int d = 0; d < n; d++) {
        int row = 0;
        int col = d;
        int temp = 0;
        while (col < n) {
            temp = min(temp, matrix[row][col]);
            row++;
            col++;
        }
        ans += temp;
    }
    for (int d = 1; d < n; d++) {
        int row = d;
        int col = 0;
        int temp = 0;
        while (row < n) {
            temp = min(temp, matrix[row][col]);
            row++;
            col++;
        }
        ans += temp;
    }
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n; 
        vector<vector<int>> a(n, vector<int> (n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        cout << abs(solve(a, n)) << '\n';
    }
    return 0;
}