/**
 *    author: A K M S Limon
 *    created: 23-October-2022  00:01:56
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

        // tc{
        //     int n; cin>>n;
        //     int b;
        //     vc<pair<ll,ll>>a;
        //     for (int i = 1; i <= n; i++){
        //         cin>>b;
        //         a.push_back({b, i});
        //     }
        //     sort(a.rbegin(), a.rend());
        //     fl(i,0,n-1){
        //         cout<<a[i].ss<<' ';
        //     } nll;
        // }
        // solve 2
        tc{
            int n; cin>>n; 
            vector<int>a(n+1);
            fl(i,1,n) cin>>a[i];
            int mx=a[1];
            set<int>s;
            fl(i,1,n) s.insert(i);
            vc<int>ans(n+1, -1);
            fl(i,2,n){
                if(a[i]>mx) mx=a[i];
                else{
                    int b=mx-a[i];
                    auto it = s.lower_bound(b);
                    ans[*it]=i;
                    s.erase(it);
                }
            }
            fl(i,1,n) {
                if(ans[i]==-1)
                ans[i]=1;
            } 
            fl(i,1,n) cout<<ans[i]<<' ';
            nll;
        }
    return 0;
}