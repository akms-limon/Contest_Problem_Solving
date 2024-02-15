/**
 *    author: A K M S Limon
 *    created: 12-February-2024  02:57:32
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;
    n = sqrt(n);
    int ans = INT_MIN;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            ans = max(ans, i);
        }
    }
    if (n != 1) ans = max(1LL * ans, n);
    cout << ans << '\n';
    return 0;
}