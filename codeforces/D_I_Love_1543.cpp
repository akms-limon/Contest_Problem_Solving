/**
 *    author: A K M S Limon
 *    created: 02-November-2024  21:28:41
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        char a[n][m];
        deque<deque<char>> v;
        for (int i = 0; i < n; i++) {
            deque<char> temp;
            for (int j = 0; j < m; j++) {
                char x; cin >> x;
                temp.push_back(x);
            }
            v.push_back(temp);
        }
        int cnt = 0;
        while (v.size() > 0) {
            string temp;
            for (int j = 0; j < v[0].size(); j++) {
                char c = v[0][j];
                temp += c;
            }
            for (int i = 1; i < v.size() - 1; i++) {
                char c = v[i][v[i].size() - 1];
                temp += c;
            }
            for (int j = v[0].size() - 1; j >= 0; j--) {
                char c = v[v.size() - 1][j];
                temp += c;
            }
            for (int i = v.size() - 2; i > 0; i--) {
                char c = v[i][0];
                temp += c;
            }
            int sz = temp.size() - 1;
            for (int k = 0; k < min(sz, 3); k++) {
                temp += temp[k];
            }
            for (int k = 0; k < (int)temp.size() - 3; k++) {
                if (temp[k] == '1' && temp[k + 1] == '5' && temp[k + 2] == '4' && temp[k + 3] == '3') {
                    cnt++;
                }
            }
            v.pop_back();
            v.pop_front();
            for (auto &it : v) {
                it.pop_back();
                it.pop_front();
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}