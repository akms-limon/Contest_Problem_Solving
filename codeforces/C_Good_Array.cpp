/**
 *    author: A K M S Limon
 *    created: 25-March-2023  00:28:47
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

        int n; cin>>n;
        ll a[n]; ll sum = 0;
        vector<pair<ll, ll>>v;
        for (ll i = 0; i < n; i++) {
            cin>>a[i]; sum+=a[i];
            v.push_back(make_pair(a[i], i+1));
        }
        sort(v.begin(), v.end());
        vector<ll>ans;
        int l = v.size();
        if((sum-v[l-1].first-v[l-2].first) == v[l-2].first){
            ans.push_back(v[l-1].second);
        }
        for (int i = 0; i < n-1; i++) {
            if(sum-v[i].first-v[l-1].first==v[l-1].first){
                ans.push_back(v[i].second);
            }
        }
        cout<<ans.size()<<'\n';
        coutx(ans);
    return 0;
}