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
        int n; cin >> n;
        string s, ss, ans; cin >> s;
        char c = s[n - 1];
        s[n - 1] = '0';
        ans.push_back(c);
        for (int i = n - 2; i >= 0; i--) {
            if (s[i] >= c) {
                ans.push_back(s[i]);
                c = s[i];
                s[i] = '0';
            }
        }
        int cnt = 0;
        int k = ans.size() - 1;
        while(ans[k] == ans[k - 1] && k >= 0) {
            cnt++;
            k--;
        }
        for (int i = 0, j = 0; i < n; i++) {
            if (s[i] == '0') {
                s[i] = ans[j];
                j++;
            }
        }
        ss = s;
        sort(ss.begin(), ss.end());
        if (ss == s) {
            cout << ans.size() - cnt -1<< '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }
    return 0;
}