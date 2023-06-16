#include<bits/stdc++.h>
using namespace std;

int main(void) {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n;
	    string str;
	    cin>>str;
        s = (int(str[0]));
	    for(int i=1;i<str.size();i++)
	    {
	       s = s^(int(str[i]));
	    }
	    if(s==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}