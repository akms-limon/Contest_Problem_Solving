/**
 *    author: A K M S Limon
 *    created: 29-October-2024  01:49:32
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        set<int> st;
        set<int> temp;
        for (int i = 0; i < n; i++) {
            st.insert(i + 1);
        }
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                temp.insert(*st.begin());
                st.erase(*(st.begin()));
                st.erase(i + 1);
            }
            else if (s[i] == '0' && st.find(i + 1) != st.end()) {
                if (*temp.begin() < i + 1) {
                    st.insert(*temp.begin());
                    temp.erase(*temp.begin());
                }
                temp.insert(i + 1);
                st.erase(i + 1);
            }
        }
        ll sum = 0;
        for (auto it : temp) {
            sum += it;
        }
        cout << sum << '\n';
    }
    return 0;
}