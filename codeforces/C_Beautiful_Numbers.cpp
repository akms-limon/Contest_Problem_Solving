/**
 *    author: A K M S Limon
 *    created: 19-June-2023  23:33:47
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<ll>
#define vl vc<ll>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define mod 1000000007
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

bool istrue(ll sum, ll a, ll b){
    while(sum>0){
        if(sum%10==a || sum%10==b){
            
        }
        else {
            return false;
        }
        sum/=10;
    }
    return true;
}


int binMulti(int a, int n){
    int ans = 0;
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
int binExpo(int e, int n){
    int ans = 1; 
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
int bininverse(int a, int m){   
    return binExpo(a, m-2);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    ll a, b, n; 
    cin>>a>>b>>n;
    ll sum;
    ll fact[n+1];
    fact[0]=1;
    for (ll i = 1; i <= n; i++) {
        fact[i]=(fact[i-1]*i)%mod;
    }
    ll ans = 0;
    for (ll i = 0; i <= n; i++) {
        sum=a*i+b*(n-i);
        bool bl = istrue(sum, a, b);
        if(bl){
            ll p = (fact[i]*fact[n-i])%mod;
            ans+=(fact[n]%mod*bininverse(p, mod)%mod)%mod;
        }
        ans%=mod;
    }
    cout<<ans<<'\n';
    return 0;
}