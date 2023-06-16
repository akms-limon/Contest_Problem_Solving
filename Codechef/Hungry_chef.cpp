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
        int normal,premium,n,r;
        cin>>normal>>premium>>n>>r;
        if(normal*n>r) cout<<"-1"<<endl;
        else if(premium*n<=r) cout<<"0 "<<n<<endl;
        else{
            int a=ceil(((r-premium*n)*1.0)/(normal-premium));
            cout<<a<<" "<<n-a<<nl;
        }
    }
    return 0;
}