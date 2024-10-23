/**
 *    author: A K M S Limon
 *    created: 17-October-2024  23:41:11
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 9;
int a[N];

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        char ch; cin >> ch;
        mp[ch]++;
    }
    for (int i = 0; i < n; i++) {
        a[i] = 0;
        if (mp[s[i]]) a[i] = 1;
    }
    ll ans = 0;
    int f[n + 1];
    f[0] = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            f[i + 1] = f[i] + 1;
        }
        else {
            f[i + 1] = 0;
        }
        ans += f[i + 1];
    }
    cout << ans << '\n';
    return 0;
}