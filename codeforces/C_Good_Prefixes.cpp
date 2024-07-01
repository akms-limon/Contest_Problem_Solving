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
        ll a[n];
        ll mx = INT_MIN, sum = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
            ll temp = sum - mx;
            if (temp == mx) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}