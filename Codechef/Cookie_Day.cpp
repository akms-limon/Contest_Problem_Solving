/**
 *    author: A K M S Limon
 *    created: 31-January-2024  20:51:22
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int k; cin >> k;
        bool b = false;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x >= k) {
                b = true;
                ans = min(ans, x % k);
            }
        }
        if (b) {
            cout << ans << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }
    return 0;
}