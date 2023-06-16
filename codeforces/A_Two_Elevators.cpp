#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t;
    while (t--)
    {
        int a, b, c, x, y;
        cin>>a>>b>>c;
        if(b>c) x = b-1;
        else if(c>b) x=abs(b-c)+abs(c-1);
        if(a==1) cout<<"1"<<endl;
        else if(x==(a-1)) cout<<"3"<<endl;
        else if(x<(a-1)) cout<<"2"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}