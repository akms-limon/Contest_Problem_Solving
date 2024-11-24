/**
 *    author: A K M S Limon
 *    created: 13-November-2024  22:18:22
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPlaindrome(string s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++, j--;
    }
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool bl = isPlaindrome(s, 0, n - 1);
        if (bl) {
            cout << 0 << '\n';
        }
        else {
            if (isPlaindrome(s, 0, n - 2) && isPlaindrome(s, 1, n - 1)) {
                cout << -1 << '\n';
            }
            else cout << 1 << '\n';
        }
    }
    return 0;
}