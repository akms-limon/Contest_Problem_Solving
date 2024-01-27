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

ll euclid_gcd(ll a, ll b) {
    if (a == 0) return b;
    return euclid_gcd(b % a, a);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, m, l, r;
    cin >> n >> m >> l >> r;
    if (n/euclid_gcd(n,m)>r/m){
        cout<<0<<endl;
    }
    else    {
        ll lc = (n / euclid_gcd(n, m)) * m;
        cout << (r / lc) - (l -1) / lc << '\n';
    }
    return 0;
}