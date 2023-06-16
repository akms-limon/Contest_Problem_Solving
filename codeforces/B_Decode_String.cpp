#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t; 
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s; 
        string ans="";
        for (int i = n-1; i >= 0; i--)
        {
            int x = s[i]-48;
            int y;
            if(x==0)
            {
                y=(s[i-1]-48)+(s[i-2]-48)*10;
                i-=2;
            }
            else
            {
                y=s[i]-48;
            }
            char z = 96+y;
            ans = z + ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}