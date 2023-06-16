/**
 *    author: A K M S Limon
 *    created: 22-March-2023  00:56:57
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
#define yes cout<<"yes"<<"\n"
#define no cout<<"no"<<"\n"
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

        int n; cin>>n; 
        int a[n]; cinx(a);
        int b[n]; 
        for (int i = 0; i < n; i++) {
            b[i]=a[i];
        }
        sort(b, b+n);
        int in=0, ind=0;
        for (int i = 0; i < n; i++) {
            if(b[i]!=a[i]) {
                in = i;
                break;
            }
        }
        for (int i = n-1; i >= 0; i--) {
            if(b[i]!=a[i]){
                ind = i;
                break;
            }
        }
        vector<int>v;
        for (int i = 0; i < in; i++) {
            v.push_back(a[i]);
        }
        for (int i = ind; i >= in; i--) {
            v.push_back(a[i]);
        }
        for (int i = ind+1; i < n; i++) {
            v.push_back(a[i]);
        }
        bool k = 1;
        for (int i = 0; i < n-1; i++){
            if(v[i]>v[i+1]) {
                k=0; break;
            }
        }
        if(k) {
            yes;
            cout<<in+1<<' '<<ind+1<<endl;
        }
        else no;
        
    return 0;
}