#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<'\n';
#define nn cout<<"NO"<<'\n';
#define nl '\n';
#define nll cout<<'\n';
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t; cin>>t; 
    for(int i=1; i<=t; i++)
    {
        int n, m; cin>>n>>m;
        if(m*1000<=n) cout<<"Case "<<i<<": "<<"VIP"<<endl;
        else if(m*800<=n) cout<<"Case "<<i<<": "<<"Regular"<<endl;
        else if(m*500<=n) cout<<"Case "<<i<<": "<<"Local"<<endl;
        else cout<<"Case "<<i<<": "<<"Aske amar mon valo nei :("<<endl;
    }
    return 0;
}