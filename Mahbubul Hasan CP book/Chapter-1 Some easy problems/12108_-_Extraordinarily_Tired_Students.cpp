/**
 *    author: A K M S Limon
 *    created: 05-March-2023  22:26:23
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 3.14159
#define pii pair<int,int>
#define dbg(x) cerr<<x<<"\n"
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define fl(i,a,b) for(int i = a; i <= b; i++)
#define fll(i,a,b) for(int i = a; i >= b; i--)
#define ff first
#define ss second
#define flit(v) for(auto it=v.begin(); it!=v.end(); it++)
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
#define sumx(array,sum) { for (auto x: array) sum+=x;  }
using namespace std;

ll lcmm(ll a, ll b){
    ll l = (a*b)/__gcd(a, b);
    return l;
}

ll currentSituation(ll a, ll b, ll c, ll min){
    ll totalMin = (c-1)+min;
    ll currentSituation = totalMin%(a+b);
    return currentSituation;
}

bool isSleep(ll a, ll b, ll c, ll min){
    ll totalMin = (c-1)+min;
    ll currentSituation = totalMin%(a+b);
    if(currentSituation<=a && currentSituation) return false;
    else return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        ll n, C=1;
        while(cin>>n && n){
            ll a[n], b[n], c[n]; 
            ll e = 0, l=1, t=n;
            ll ans, x, y, mx=-1;
            while(t--){
                cin>>a[e]>>b[e]>>c[e];
                e++;
            }
            for (int i = 0; i < n; i++) {   
                l = lcmm(l,a[i]+b[i]);
            }
            for (ll i = 1; i <= l; i++) {
                ll cnt = 0;
                for (int j = 0; j < n; j++)
                {
                    bool p = isSleep(a[j], b[j], c[j], i);
                    if(p) cnt++;
                }
                if(cnt<=n/2){
                    for (int j = 0; j <= n; j++) {
                        bool p = isSleep(a[j], b[j], c[j], i);
                        if(p){
                            x=a[j]+b[j], y =i;
                            ans = currentSituation(a[j], b[j], c[j], i);
                            if(ans == 0) mx = max(mx, y+1);
                            else mx = max(mx, (x-ans+y+1));
                        }
                    }
                    break;
                }
            }
            cout<<"Case "<<C<<": ";
            cout<<mx<<endl;
            C++;
        }
    return 0;
}