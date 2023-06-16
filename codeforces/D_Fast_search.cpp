/**
 *    author: A K M S Limon
 *    created: 24-February-2023  04:31:10
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

int leftmost(int a[], int n, int key){
    int lo=0, hi=n-1, mid;
    int ans=n;
    while(lo<=hi){
        mid = lo+(hi-lo)/2;
        if(a[mid]>=key){
            ans = mid;
            hi = mid -1;
        }
        else{
            lo = mid +1;
        }
    }
    return ans;
}

int rightmost(int a[], int n, int k){
    int lo = 0, hi = n-1, mid; 
    int ans = -1; 
    while(lo<=hi){
        mid = lo + (hi -lo)/2;
        if(a[mid]<=k){
            lo = mid + 1;
            ans = mid;
        }
        else {
            hi = mid -1;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n, q; cin>>n;
        int a[n]; cinx(a);
        sort(a, a+n);
        cin>>q;
        while(q--){
            int b; cin>>b; 
            int c; cin>>c; 
            // int x = leftmost(a, n, b);
            // int y = rightmost(a, n, c);
            // cout<<y-x+1<<' '; 
            int l = lower_bound(a, a+n, b) - a; 
            int u = upper_bound(a, a+n, c) - a;
            cout<<u-l<<" ";
        } nll;
    return 0;
}