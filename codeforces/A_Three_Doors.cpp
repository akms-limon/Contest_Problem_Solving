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
    while (t--)
    {
        int x; cin>>x; 
        int ara[3];
        for (int i = 0; i <3; i++)
        {
            cin>>ara[i];
        }
        int b=1;
        for (int i = 0; i<2; i++)
        {
            if(ara[x-1]!=0)
            {
                x=ara[x-1];
            }
            else
            {
                b=0;
            }
        }
        if(b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}