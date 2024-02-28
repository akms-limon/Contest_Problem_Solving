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
        int a[n];
        set<int>s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = n - 1; i >= 0; i--) {
            int cnt = 0;
            int x = a[i] + i + 1;
            while (a[i] + i + 1 == x) {
                cnt++;
                i--;
            }
            for (int i = 0; i < cnt; i++) {
                s.insert(x);
                x--;
            }
            i++;
        }
        vector<int> ans;
        for (auto it : s) {
            ans.push_back(it);
        }
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}