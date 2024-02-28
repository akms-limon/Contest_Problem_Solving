/**
 *    author: A K M S Limon
 *    created: 16-February-2024  03:23:27
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
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            while (a[i] > 0) {
                ans += (a[i] % 10);
                a[i] /= 10;
            }
        }
        if (ans % 3) cout << "No" << '\n';
        else cout << "Yes" << '\n';
    }
    return 0;
}