/**
 *    author: A K M S Limon
 *    created: 30-January-2024  21:01:32
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector< pair<int, int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back(make_pair(a[i], b[i]));
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            cout << v[i].first << ' ';
        }
        cout << '\n';
        for (int i = 0; i < n; i++) {
            cout << v[i].second << ' ';
        }
        cout << '\n';
    }
    return 0;
}