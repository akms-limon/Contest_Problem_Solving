#include <bits/stdc++.h>
#define The_End return 0
#define nl '\n'
#define gl getline //(cin>>ws,s);
#define ll long long
#define st(n) fixed << setprecision(n)
#define ys cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define fl(i, a, n) for(int i = a; i < n; i++)
#define fll(i, n, a) for(int i = n; i >= a; i--)
#define JUST_Beginners ios_base::sync_with_stdio(0);cout.tie(0)
#define mod 1000000007

using namespace std;

void somadhan()
{
	int n; cin>>n;
	string s[n], t[n], u[n];
	unordered_map<string, bool>m1;
	unordered_map<string, bool>m2;
	unordered_map<string, bool>m3;

	fl(i,0,n){cin>>s[i];m1[s[i]] = 1;}
	fl(i,0,n){cin>>t[i];m2[t[i]] = 1;}
	fl(i,0,n){cin>>u[i];m3[u[i]] = 1;}

	int a = 0, b = 0, c = 0;
	fl(i,0,n)
	{
		if(m2[s[i]] && m3[s[i]])
		{
			continue;
		}
		else if(m2[s[i]])
		{
			a++;
		}
		else if(m3[s[i]])
		{
			a++;
		}
		else
		{
			a+=3;
		}

	}
	fl(i,0,n)
	{
		if(m1[t[i]] && m3[t[i]])
		{
			continue;
		}
		else if(m1[t[i]])
		{
			b++;
		}
		else if(m3[t[i]])
		{
			b++;
		}
		else
		{
			b+=3;
		}

	}
	fl(i,0,n)
	{
		if(m1[u[i]] && m2[u[i]])
		{
			continue;
		}
		else if(m1[u[i]])
		{
			c++;
		}
		else if(m2[u[i]])
		{
			c++;
		}
		else
		{
			c+=3;
		}

	}
	cout<<a<<" "<<b<<" "<<c<<nl;
}

int main()
{
	JUST_Beginners;
	int t; cin>>t;
	while(t--)
	somadhan();

	The_End;
}