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
    while(t--)
    {
        int a, b, c, m; cin>>a>>b>>c;
        m=min(a,b);
        if((a==b && c>=a) || (a==c && b>=a) || (b==c && a>=b)){
            cout<<"YES"<<endl;
        }
        else if(a!=b){
            if(c==m){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}