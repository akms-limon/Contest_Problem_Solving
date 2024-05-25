/**
 *    author: A K M S Limon
 *    created: 04-May-2024  01:48:44
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<int> v[n];
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v[i].push_back(x);
    }
    for (int i = 0; i < n; i++) {
        for (auto it : v[i]) {
            cout << it << ' ';
        }
        cout << '\n';
    }
    return 0;
}