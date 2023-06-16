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
    while(t--){
        int n,k,l; cin>>n>>k>>l;
        int cnt=0;
        ll m=k*l;
        if(m<n || (k==1 && l!=1)){
            cout<<-1<<nl;
        }
        else{
             for(int i=1; i<=n; i++){
                if(i<=k){
                    cout<<i<<" ";
                    cnt++;
                    if(i==k){
                        i=0;
                    }
                }
                if(cnt==n){
                    cout<<nl;
                    break;
                }
            }
        }
    }
    return 0;
}