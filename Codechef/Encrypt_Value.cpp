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

const int mod = 1000000000 + 7;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n; cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort (a, a + n);
        ll ans = a[0];
        for (int i = 1; i < n; i++) {
            if (ans * a[i] > ans + a[i]) {
                ans *= a[i];
            }
            else {
                ans += a[i];
            }
            ans %= mod;
        }
        cout << ans << '\n';
    }
    return 0;
}