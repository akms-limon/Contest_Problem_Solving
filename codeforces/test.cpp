/**
 *    author: A K M S Limon
 *    created: 17-September-2024  10:52:19
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        for (auto it : mp) {
            cout << it.first << ' ' << it.second << '\n';
        }
        for (auto it : mp) {
            if (it.first > 1) {
                cout << "yes" << '\n';
            }
        }
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
        }
    }
    return 0;
}