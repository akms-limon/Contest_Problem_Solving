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
        int n,k,x,y; cin>>n>>k>>x>>y;
        if(x>y)
        {
            int a=k*x+(n-k)*y;
            cout<<a<<endl;
        }
        else
        {
            cout<<n*x<<endl;
        }
    }
    return 0;
}