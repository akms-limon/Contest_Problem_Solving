#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a,b,c,p,q,r,x,y,z;
    cin>>a>>b>>c>>p>>q>>r>>x>>y>>z;
    int f1 = a+b+c;
    int f2 = p+q+r;
    int f3 = x+y+z;

    int mx = max(f1, max(f2,f3));
    a += (mx - f1);
    q += (mx - f2);
    z += (mx - f3);
    while (a+q+z != a+b+c){
        a++, q++, z++;
    }
    cout<<a<<' '<<b<<' '<<c<<endl; 
    cout<<p<<' '<<q<<' '<<r<<endl; 
    cout<<x<<' '<<y<<' '<<z<<endl; 


    return 0;
}