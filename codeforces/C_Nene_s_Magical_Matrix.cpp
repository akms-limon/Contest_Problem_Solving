/**
 *    author: A K M S Limon
 *    created: 13-April-2024  22:29:38
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t; 
    while (t--) {
        ll n; cin >> n;
        ll ans = 0;
        int p[n];
        for (ll i = 1, j = 1; i <= n; i++, j += 2) {
            ans += (i * j);
            p[i - 1] = i;
        }
        cout << ans << ' ' << 2 * n << '\n';
        for (int i = n; i > 0; i--) {
            cout << 1 << ' ' << i << ' ';
            for (int j = 0; j < n; j++) {
                cout << p[j] << ' ';
            }
            cout << '\n';
            cout << 2 << ' ' << i << ' ';
            for (int j = 0; j < n; j++) {
                cout << p[j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}