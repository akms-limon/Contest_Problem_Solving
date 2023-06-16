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
    int n, m; cin>>n>>m;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    ll c=0;
    ll cnt1[n+1]={0};
    for (int i = 2; i <= n; i++)
    {
        if(a[i]<a[i-1])
        c=c+a[i-1]-a[i];
        cnt1[i]=c;
    }
    c=0;
    ll cnt2[n+1]={0};
    for (int i = n-1; i>=1; i--)
    {
        if(a[i+1]>a[i])
        c=c+a[i+1]-a[i];
        cnt2[i]=c;
    }
    while (m--)
    {
        int x,y; cin>>x>>y;
        if(x<y){
            cout<<cnt1[y]-cnt1[x]<<endl;
        }
        else if(x>y){
            cout<<cnt2[y]-cnt2[x]<<endl;
        }
    }
    
    return 0;
}