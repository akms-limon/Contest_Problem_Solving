/**
 *    author: A K M S Limon
 *    created: 03-June-2023  21:16:21
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

bool cmp(pair<int, int>p, pair<int, int>q){
    if(p.first==q.first){
        return p.second>q.second;
    }
    return p.first<q.first;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n; cin>>n; 
        vector< pair<ll, ll>>v;
        map<ll, ll>mp;
        for (int i = 0; i < n; i++) {
            int a, b; 
            cin>>a>>b;
            v.push_back(make_pair(a, b));
            mp[a]++;
        }
        sort(v.begin(), v.end(), cmp);
        ll cnt = 0, ans= 0, mn = 0;
        for(auto it: v){
            if(it.first>mn){
                ans+=it.second;
                cnt++;
            }
            if(mp[cnt]>0) {
                mn = cnt;
                cnt-=mp[cnt];
                if(cnt<0) cnt=0;
                mp[mn]=0;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}