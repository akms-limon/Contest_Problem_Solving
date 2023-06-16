#include<bits/stdc++.h>
#define ll long long
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int a, x; cin>>a>>x;
        int n=2*a;
        int ara[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ara[i];
        }
        sort(ara+0, ara+n);
        int cn=0;
        for (int i = 0, j=a; i < n, j<n; i++, j++)
        {
            if(!((ara[j]-ara[i])>=x))
            {                
                cn=1;
                break;
            }
        }
        if(cn)
        nn;
        else yy;
    }
    return 0;
}