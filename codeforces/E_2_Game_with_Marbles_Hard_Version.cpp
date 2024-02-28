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
        int b[n];
        vector<pair<int, pair<int, int>>> v;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            v.push_back(make_pair(abs(a[i] + b[i]), make_pair(a[i], b[i])));
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (int j = n - 1; j >= 0; j-=2) {
            if (j == 0){
                ans+= (v[j].second.first - 1);
            }
            else {
                ans+= (v[j].second.first - 1);
                ans-= (v[j - 1].second.second - 1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}