/**
 *    author: A K M S Limon
 *    created: 02-September-2024  15:47:20
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9 + 7;

ll binMulti(ll a, ll n){
    ll ans = 0;
    while(n){
        if(n&1){
            ans= (ans+a)%mod;
        }
        a = (a+a)%mod;
        n>>=1;
    }
    return ans;
}

ll binExpo(ll e, ll n){
    ll ans = 1; 
    while(n){
        if(n&1) {
            ans = binMulti(ans, e);
        }
        e = binMulti(e, e);
        n>>=1;
    }
    return ans;
}

ll bininverse(ll a, ll mod){   
    return binExpo(a, mod-2);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        ll total_sum = 0, total_elemnets = 0;
        for (int i = 0; i < n; i++) {
            sum -= a[i];
            total_sum += (a[i] * (sum % mod)) % mod;
            total_sum %= mod;
            total_elemnets += (n - i - 1);
        }
        ll bin_inverse = bininverse(total_elemnets, mod);
        cout << (total_sum  * bin_inverse % mod) % mod << '\n';
    }
    return 0;
}