/**
 *    author: A K M S Limon
 *    created: 13-November-2024  21:04:15
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        string a, b; cin >> a >> b;
        int x = 0, xx = 0, y = 0, yy = 0;
        int i = 0;
        while (a[i] == 'b' & i < a.size()) {
            x++;
            i++;
        }
        i = 0;
        while (b[i] == 'b' & i < b.size()) {
            y++;
            i++;
        }
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == 'a') {
                xx++;
            }
        }
        for (int i = 0; i < b.size(); i++) {
            if (b[i] == 'a') {
                yy++;
            }
        }
        if (x == y && xx == yy) {
            cout << "Yes" << '\n';
        }
        else {
            cout << "No" << '\n';
        }
    }
    return 0;
}