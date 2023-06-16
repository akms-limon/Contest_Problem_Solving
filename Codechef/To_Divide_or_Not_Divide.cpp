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
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,n; cin>>a>>b>>n;
        if(a>=b && a%b==0) cout<<-1<<endl;
        else if(n%a==0 && n%b!=0) cout<<n<<endl;
        else{
            int c=n%a;
            for (int i = n+(a-c); ; i+=a)
            {
                if(i%a==0 && i%b!=0) 
                {
                    cout<<i<<endl;
                    break;
                }
            }   
        }
    }
    return 0;
}