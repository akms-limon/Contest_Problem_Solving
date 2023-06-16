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
        int n,m;
        cin>>n>>m;
        if(n%2==0 && m%2==0)
        cout<<"0"<<endl;
        else if(n%2==0 && m%2==1)
        cout<<n<<endl;
        else if(n%2==1 && m%2==0)
        cout<<m<<endl;
        else
        cout<<n+m-1<<endl;
    }
    return 0;
}