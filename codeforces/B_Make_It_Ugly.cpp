/**
 *    author: A K M S Limon
 *    created: 12-April-2024  20:59:09
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t; 
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = n;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            while (a[i] == a[0] && i < n) {
                cnt++;
                i++;
            }
            ans = min(ans, cnt);
        }
        if (ans == n) cout << -1 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}