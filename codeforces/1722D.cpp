#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
	int t, x; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		string s; cin>>s;
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='L')
			{
				sum+=i;
			}
			else if(s[i]=='R')
			{
				sum+=n-i-1;
			}
		}
		vector<int>v;
		for (int i = 0; i < n; i++)
		{
			if(i<n/2)
			{
				if(s[i]=='L')
				{
					x = abs(n-i-i-1);
					v.push_back(x);
				}
			}
			if(i>=n/2)
			{
				if(s[i]=='R')
				{
					x = abs(n-i-i-1);
					v.push_back(x);
				}
			}
		}
		sort(v.begin(), v.end(), greater<int>());
		for (int i = 0; i < n; i++)
		{
			if(v.size()>i)
			{
				sum+=v[i];
			}
			cout<<sum<<" ";
		}
		cout<<endl;
	}
	return 0;
}