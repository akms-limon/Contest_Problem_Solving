/**
 *    author: A K M S Limon
 *    created: 28-October-2024  21:12:10
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a, temp;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }
        int ans1 = 1, ans2 = LONG_LONG_MAX, last = LONG_LONG_MAX;
        for (int i = 0; i < n - 1; i+=2) {
            ans1 = max(a[i + 1] - a[i], ans1);
        }
        if (n % 2) {
            for (int i = 0; i < n; i++) {
                temp = a;
                auto pos = temp.begin() + i;
                temp.erase(pos);
                ans2 = 1;
                for (int j = 0; j < n - 2; j += 2) {
                    ans2 = max(ans2, temp[j + 1] - temp[j]);
                }
                last = min(last, ans2);
            }
        }
        cout << min(ans1, last) << '\n';
    }
    return 0;
}