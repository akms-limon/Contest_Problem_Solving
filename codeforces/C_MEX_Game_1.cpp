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
        map<int, int> mp;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            s.insert(x);
            mp[x]++;
        }
        int temp = 0, ans = s.size();
        for(auto it : s) {
            if (temp != it) {
                ans = temp;
                break;
            }
            temp++;
        }
        int cnt = 1;
        for (auto it : mp) {
            if (it.second < 2 && it.first < ans) {
                if (cnt == 2) {
                    ans = it.first;
                    break;
                }
                cnt++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}