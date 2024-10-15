/**
 *    author: A K M S Limon
 *    created: 14-October-2024  21:37:18
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;

// (a*n)%mod
ll bigMultiRecur(ll a, ll n){
    if(n==1) return a%mod;
    ll x = bigMultiRecur(a, n/2);
    if(n%2==0){
        return (x+x)%mod;
    }
    else {
        return (((x+x)%mod)+a)%mod;
    }
}

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

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n; 
    ll a[n], k[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> k[i];
        cout << binExpo(2, k[i]) << '\n';
    }
    return 0;
}