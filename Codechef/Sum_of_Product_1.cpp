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
        int m; cin>>m;
        int n=m+1;
        int ara[n];
        int c=0, sum=0;
        for(int i=1; i<=m; i++){
            cin>>ara[i];
            if(ara[i]==1){
                c++;
                if(i==m){
                sum+=(c*(c+1))/2;
                }
            }
            else if(ara[i]==0){
                sum+=(c*(c+1))/2;
                c=0;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}