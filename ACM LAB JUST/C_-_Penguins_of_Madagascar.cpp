/**
 *    author: A K M S Limon
 *    created: 26-March-2024  15:22:56
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    string s; cin >> s;
    map<char, vector<int> > mp;
    for (int i = 0; i < (int) s.size(); i++) {
        mp[s[i]].push_back(i);
    }
    int q; cin >> q;
    while (q--) {
        string temp; cin >> temp;
        int ans = -1;
        bool bl = true;
        for (int i = 0; i < (int) temp.size(); i++) {
            int x = upper_bound(mp[temp[i]].begin(), mp[temp[i]].end(), ans) - mp[temp[i]].begin();
            if (x == mp[temp[i]].size()) {
                bl = false;
                break;
            }
            ans = mp[temp[i]][x];
        }
        if (bl) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}