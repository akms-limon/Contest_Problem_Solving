/**
 *    author: A K M S Limon
 *    created: 17-October-2024  21:51:03
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int yo(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    int ans = 2 * yo(n - 2);
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    cout << yo(n) << '\n';
    return 0;
}