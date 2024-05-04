/**
 *    author: A K M S Limon
 *    created: 29-April-2024  20:40:29
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
        int ans = 3;
        for (int i = 0; i < n; i++) {
            if (a[a[i] - 1] == i + 1) ans = 2;
        }
        cout << ans << '\n';
    }
    return 0;
}