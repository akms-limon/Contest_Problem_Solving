/**
 *    author: A K M S Limon
 *    created: 22-May-2023  08:22:47
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
        int a[n], b[n]; 
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int l = -1, r = -1, mx = INT_MIN, mn = INT_MAX;
        for (int i = 0; i<n; i++) {
            if(a[i]!=b[i] && l==-1) {
                l = i;
                mn = b[i];
            }
        }
        for(int j = n-1; j>=0; j--){

            if(a[j]!=b[j] && r==-1) {
                r = j;
                mx = b[j];
            }
        }
        for (int i = r+1; i < n; i++) {
            if(b[i]>=mx){
                mx = b[i];
                r = i;
            }
            else break;
        }
        for (int i = l-1; i>=0 ; i--) {
            if(b[i]<=mn){
                mn = b[i];
                l = i;
            }
            else break;
        }
        cout<<l+1<<' '<<r+1<<'\n';
    }
    return 0;
}