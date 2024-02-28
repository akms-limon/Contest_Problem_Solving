#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc int t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n, k, m; cin >> n >> k >> m;
        string s; cin >> s;
        set<char>st;
        int cnt = 0;
        string ans;
        for (int i = 0; i < s.size(); i++) {
            char c = 'a' + k;
            if (s[i] < c) {
                st.insert(s[i]);
            }
            if (st.size() == k) {
                cnt++;
                auto it = st.end();
                --it;
                ans.push_back(*it);
                // ans.push_back(s[i]);
                st.clear();
            }
        }
        map<char, int> mp;
        for (auto it : st) {
            mp[it]++;
        }
        char next;
        for (char c = 'a'; c < 'a' + k; c++) {
            if (mp[c] == 0) {
                next = c;
                break;
            }
        }
        if (cnt < n) {
            cout << "NO" << '\n';
            cout << ans;
            for (int i = 0; i < (n - ans.size()); i++) {
                cout << next;
            }
            cout << '\n';
        }
        else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}