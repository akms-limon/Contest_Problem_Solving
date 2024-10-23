/**
 *    author: A K M S Limon
 *    created: 16-October-2024  20:43:46
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        int jor = 0, bijor = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2) {
                bijor ++;
            }
            else {
                jor++;
            }
        }
        int ans = 0;
        if (bijor) {
            ans += (jor + 1);
        }
        ans += (bijor - 1) / 2;
        cout << ans << '\n';
    }
    return 0;
}