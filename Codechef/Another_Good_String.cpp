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

    int t; cin >> t;
    while (t--) {
        int n, q; cin >> n >> q;
        string s; cin >> s;
        map<char, int> mp;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            cnt = 0;
            while (s[i] == c && i < s.size()) {
                cnt++;
                i++;
            }
            mp[c] = max(mp[c], cnt);
            i--;
        }
        int ans = INT_MIN;
        for (char i = 'a'; i < 'z' + 1; i++) {
            ans = max(ans, mp[i]);
        }
        cout << ans << ' ';
        for (int i = 0; i < q; i++) {
            char c; cin >> c;
            if (s[s.size() - 1] == c) {
                cnt++;
            }
            else {
                cnt = 1;
            }
            s.push_back(c);
            ans = max(cnt, ans);
            cout << ans << ' ';
        }
        cout << '\n';
    }
    return 0;
}