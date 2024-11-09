/**
 *    author: A K M S Limon
 *    created: 06-November-2024  21:48:52
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1e9 + 7;

// (a*n)%mod
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

// (e^n)%mod
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

// (1/a)%mod
ll bininverse(ll a, ll mod){   
    return binExpo(a, mod-2);
}


int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
        }
        cout << binMulti(binMulti(binMulti(k, (k + 1)), bininverse(2, mod)), bininverse((k * k), mod)) << '\n';
    }
    return 0;
}