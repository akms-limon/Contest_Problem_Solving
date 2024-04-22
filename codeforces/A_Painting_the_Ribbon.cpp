/**
 *    author: A K M S Limon
 *    created: 12-April-2024  20:42:47
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n >> m >> k;
        int ans = n / m;
        if (n % m != 0) {
            ans ++;
        }
        ans = n - ans;
        if (k >= ans) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}