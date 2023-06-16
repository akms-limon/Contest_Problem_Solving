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
        int x, y; cin>>x>>y;
        if(y<=x) cout<<y<<endl;
        else cout<<x<<endl;
    }
    return 0;
}