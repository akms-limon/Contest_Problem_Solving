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
        int n, k; cin >> n >> k;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<int> v;
        for (auto it : mp) {
            v.push_back(it.second);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int bl = v.size() - 1;
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i] >= k) {
                v[i + 1] += v[i] - 1;
            }
            else {
                bl = i;
                break;
            }
        }
        int ans = 0;
        for (int i = bl; i < v.size(); i++) {
            if (v[i] >= k) {
                ans+= k - 1;
            }
            else {
                ans += v[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}