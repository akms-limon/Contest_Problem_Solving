/**
 *    author: A K M S Limon
 *    created: 15-October-2022  13:59:26
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
#define PI 2*acos(0.0)
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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n; cin>>n;
        int c=0; int d=0;
        ll s1=1,s2=1,i;
        while(n--){
            ll b, k; cin>>b>>k;
            string s; cin>>s;
            if(b==2){
                fl(i,0,s.size()-1) if(s[i]!='a') c=1;
                s2+=k*s.size();
            }
            else if(b==1){
                fl(i,0,s.size()-1) if(s[i]!='a') d=1;
                s1+=k*s.size();
            }
            if(c==1) yes;
            else if(c==0 && d==1) no;
            else if(s1<s2) yes;
            else no;
        }
    }
    return 0;
}