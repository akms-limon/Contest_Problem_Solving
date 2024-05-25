//starting with the name of almighty ALLAH
// Practice is the only shortcut to improve
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define rj ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;
/* #ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(x...)
#endif */
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
	return uniform_int_distribution<int>(l, r) (rng);
}
void solve()
{
	int a;
	cin >> a;
	vector<int>v(a);
	cinv(v)
	map<pii, int>l, r, m;
	map<tuple<int, int, int>, int>al;
	ll an = 0;
	for (int i = 0; i + 2 < a; i++)
	{
		an += l[ {v[i], v[i + 1]}];
		an += r[ {v[i + 1], v[i + 2]}];
		an += m[ {v[i], v[i + 2]}];
		an -= al[ {v[i], v[i + 1], v[i + 2]}] * 3;
		al[ {v[i], v[i + 1], v[i + 2]}]++;
		l[ {v[i], v[i + 1]}]++;
		r[ {v[i + 1], v[i + 2]}]++;
		m[ {v[i], v[i + 2]}]++;
	}
	cout << an << nl;
}

int main()
{
	/*#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE*/
	rj
	tst
	//int t;cin>>t;fr(i,1,t) cout<<"Case "<<i<<": ",solve();
	//ll t;scanf("%lld",&t);fr(i,1,t) printf("Case %lld: ",i),solve();
	solve();
	return 0;
}