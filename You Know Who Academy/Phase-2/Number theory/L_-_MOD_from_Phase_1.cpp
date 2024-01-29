/**
 *    author: A K M S Limon
 *    created: 28-January-2024  01:42:56
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// (a * b)%mod
ll binMulti(ll a, ll n, ll mod){
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
ll binExpo(ll e, ll n, ll mod){
    ll ans = 1; 
    while(n){
        if(n&1) {
            ans = binMulti(ans, e, mod);
        }
        e = binMulti(e, e, mod);
        n>>=1;
    }
    return ans;
}

// (1/a)%mod
ll bininverse(ll a, ll mod){   
    return binExpo(a, mod-2, mod);
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll a, b, p; cin >> a >> b >> p;
    cout << binExpo(a, b, p) << '\n' << binMulti(a, b, p) << '\n' << binMulti(a, bininverse(b, p), p) << '\n';
      
    return 0;
}