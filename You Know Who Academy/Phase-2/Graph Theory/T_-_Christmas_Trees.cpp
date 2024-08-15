/**
 *    author: A K M S Limon
 *    created: 12-July-2024  22:26:21
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    queue<int> q;
    map<int, int> d;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; 
        q.push(x);
        d[x] = 0;
    }
    vector<int> v;
    ll ans = 0;
    while (!q.empty() && m > 0) {
        int u = q.front();
        q.pop();
        if(d.find(u - 1) == d.end() && m > 0) {
            d[u - 1] = d[u] + 1;
            ans += d[u - 1];
            q.push(u - 1);
            v.push_back(u - 1);
            m--;
        }
        if(d.find(u + 1) == d.end() && m > 0) {
            d[u + 1] = d[u] + 1;
            ans += d[u + 1];
            q.push(u + 1);
            v.push_back(u + 1);
            m--;
        }
    }
    cout << ans << '\n';
    for (auto it : v) {
        cout << it << ' ';
    }
    cout << '\n';
    return 0;
}