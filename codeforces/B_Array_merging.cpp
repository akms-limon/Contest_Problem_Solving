/**
 *    author: A K M S Limon
 *    created: 28-May-2023  21:05:09
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

int isSubstring(string s, string sub) {
    if (s.find(sub) != string::npos)
       return s.find(sub);
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n; cin>>n;
        int a[n]; 
        int mx = INT_MIN;
        for (int i = 0; i < n; i++){
            cin>>a[i]; 
            mx = max(a[i], mx);
        }
        int b[n]; 
        for (int i = 0; i < n; i++){
            cin>>b[i]; 
            mx = max(b[i], mx);
        }
        int c[mx], d[mx];
        for (int i = 0; i < mx; i++) {
            c[i]=0, d[i]=0;
        }
        for (int i = 0; i < n-1; i++) {
            int cnt = 1;
            while(a[i]==a[i+1]){
                cnt++; i++;
            }
            c[a[i]-1]=max(cnt, c[a[i]-1]);
        }
        if(a[n-1]!=a[n-2]) c[a[n-1]-1]=max(c[a[n-1]-1], 1);
        for (int i = 0; i < n-1; i++) {
            int cnt = 1;
            while(b[i]==b[i+1]){
                cnt++; i++;
            }
            d[b[i]-1]=max(cnt, d[b[i]-1]);
        }
        if(b[n-1]!=b[n-2]) d[b[n-1]-1]=max(d[b[n-1]-1], 1);
        int ans = INT_MIN;
        for (int i = 0; i < mx; i++) {
            ans=max(ans, c[i]+d[i]);   
        }
        cout<<ans<<endl;
    }
    return 0;
}