/**
 *    author: A K M S Limon
 *    created: 20-May-2024  20:50:53
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int x, y;
        cin >> y >> x;
        int ans = (x + 1) / 2;
        int temp = ans * 7;
        if (x % 2) {
            temp += 4;
        }
        if (y > temp) {
            y -= temp;
            ans += (y + 14) / 15;
        }
        cout << ans << '\n';
    }
    return 0;
}