#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

ll dif(ll x, ll y, ll c1, ll c2)
{
    return sqrt((x-c1)*(x-c1)+(y-c2)*(y-c2));
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t; 
    cin>>t;
    while(t--)
    {
        ll x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        ll c1, c2;
        c1=x1; c2=y2;

        ll fs=dif(x1, y1, c1, c2);
        ll fd=dif(x2, y2, c1, c2);
        //cout<<fs<<' '<<fd<<endl;
        if(abs(fs-fd)%2==0) cout<<min(fs, fd)*2+abs(fs-fd)*2<<endl;
        else cout<<(min(fs, fd)*2)+((abs(fs-fd)-1)*2)+1<<endl;
    }

    return 0;
}