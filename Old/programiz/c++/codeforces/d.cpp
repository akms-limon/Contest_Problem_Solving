#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i<n; i++)
			cin>>a[i];

		sort(a, a+n);

		int count = 0, ans = 0;
		bool flag = 0;
		for(int i = 0; i<n-1; i++)
		{

			if(a[i]==a[i+1]){
				count++;
				if(count==2)
				{
					ans = a[i];
					flag = 1;
					break;
				}
			}
			else
			{
				count = 0;
			}

		}
		if(flag)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;
		
	}
	return 0;
}