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
    int a, b; cin>>a>>b;
    if(a<b) swap(a,b);
    int c=(a+b)-(a-b)-1;
    cout<<c<<endl;
    return 0;
}