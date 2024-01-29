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

    ll nn, mm, lL, rr;
    cin >> nn >> mm >> lL >> rr;
    __int128 gcd, lc, n = nn, m = mm, l = lL, r = rr;
    gcd = __gcd(n,  m);
    lc = (m / gcd) * n;
    cout <<(ll) ((r / lc) - ((l - 1) / lc)) << '\n';
    return 0;
}