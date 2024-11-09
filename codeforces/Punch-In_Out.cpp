#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            char c; cin >> c;
            int f; cin >> f;
            char bal; cin >> bal;
            int s; cin >> s;
            int x = f * 100 + s;
            if (f == 0 && s == 0 && c == '<') {
                x = 2400;
            }
            v.push_back(x);
        }
        int w = 0;
        for (auto it : v) {
            cout << it << ' ';
        }
        cout << '\n';
        for (int i = 0; i < v.size(); i+=2) {
            
        }
    }
    return 0;
}