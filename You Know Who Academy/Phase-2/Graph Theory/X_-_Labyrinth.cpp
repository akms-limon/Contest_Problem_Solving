/**
 *    author: A K M S Limon
 *    created: 28-August-2024  03:44:19
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1010;



int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'A') {
                sr = i, sc = j;
            }
        }
    }
    
    return 0;
}