/**
 *    author: A K M S Limon
 *    created: 02-June-2023  16:17:41
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

bool cmp(pair<int, int> x, pair<int, int>y){
    if(x.first==y.first){
        return x.second>y.second;
    }
    return x.first<y.first;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    // vector<pair<int, int> > v({{1, 3}, {1, 2}, {1, 1}, {2, 3}, {1, 5}, {3, 4}});
    // sort(v.begin(), v.end(), cmp);
    // for(auto it : v){
    //     cout<<it.first<<' '<<it.second<<'\n';
    // }

    map<int, int> mp{{1, 5}, {1, 2}, {1, 1}, {2, 3},{2, 5}, {1, 5}, {3, 4}};
    //sort(mp.begin(), mp.end());

    nll; 

    vector<pair<int, int>>v;
    for(auto it : mp){
        v.push_back(make_pair(it.second, it.first));
    }
    sort(v.begin(), v.end());
    for(auto it : v){
        cout<<it.second <<' '<<it.first<<'\n';
    }
    return 0;
}