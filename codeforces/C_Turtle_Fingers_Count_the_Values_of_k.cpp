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

// (a*n)%mod
ll binMulti(ll a, ll n){
    ll ans = 0;
    while(n){
        if(n&1){
            ans= (ans+a);
        }
        a = (a+a);
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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        ll a, b, l;
        cin >> a >> b >> l;
        ll temp = l;
        int cnt1 = 0, cnt2 = 0;
        while (temp) {
            cnt1++;
            temp /= a;
        }
        temp = l;
        while (temp) {
            cnt2++;
            temp /= b;
        }
        int cnt = 0;
        set<int> st;
        for (ll i = 0; i <= cnt1; i++) {
            ll x = binExpo(a, i);
            if (x <= l) {
                for (ll j = 0; j <= cnt2; j++) {
                    ll y = binExpo(b, j);
                    if (y <= l) {
                        if (l % (x * y) == 0) {
                            st.insert(l / (x * y));
                        } 
                    }
                }
            }
        }
        cout << st.size() << '\n';
    }
    return 0;
}