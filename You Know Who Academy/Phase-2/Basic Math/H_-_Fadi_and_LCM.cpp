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

    ll n; cin >> n;
    ll ans;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            ll x = i, y = n / i;
            if ((x * y) / __gcd(x, y) == n) {
                ans = i;
            }
        }
    }
    cout << ans << ' ' << n / ans << '\n';
    return 0;
}