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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m; cin>>n>>k>>m;
        int a=k*m;
        int b=n%a;
        if(!b) cout<<n/a<<nl;
        else cout<<n/a+1<<nl;
    }
    return 0;
}