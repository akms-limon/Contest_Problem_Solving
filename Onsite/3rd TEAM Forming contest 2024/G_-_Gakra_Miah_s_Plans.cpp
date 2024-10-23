/**
 *    author: A K M S Limon
 *    created: 20-October-2024  01:46:26
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    string s; cin >> s;
    vector<vector<int>> v (27);
    for (int i = 0; i < n; i++) {
        if (s[i] == '#') v[26].push_back(i);
        else v[s[i] - 'a'].push_back(i);
    }
    int q; cin >> q;
    while (q--) {
        string temp;
        bool bl = true;
        for (int i = 0; i < temp.size(); i++) {
            
        }
    }
    return 0;
}