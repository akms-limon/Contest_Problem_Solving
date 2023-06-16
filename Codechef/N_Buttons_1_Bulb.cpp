#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define nl "\n"
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int cnt=0;
        string s, r; cin>>s>>r;
        for (int i = 0; i < n; i++)
        {
            if(s[i]!=r[i])
            cnt++;
        }
        if(cnt%2==0) cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}