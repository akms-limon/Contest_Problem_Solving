/**
 *    author: A K M S Limon
 *    created: 01-May-2024  21:56:02
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    string s; cin >> s;
    string r = s;
    reverse(r.begin(), r.end());
    map<char, vector<int>> oc_s, oc_r;
    for (int i = 0; i < s.size(); i++) {
        oc_s[s[i]].push_back(i);
    }
    for (int i = 0; i < r.size(); i++) {
        oc_r[r[i]].push_back(i);
    }
    int p[n];
    for (char ch = 'a'; ch <= 'z'; ch++) {
        for (int i = 0; i < oc_s[ch].size(); i++) {
            p[oc_r[ch][i]] = oc_s[ch][i]; 
        }
    }
    o_set <int> st;
    long long ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        ans += st.order_of_key(p[i]);
        st.insert(p[i]);
    }
    cout << ans << '\n';
    return 0;
}