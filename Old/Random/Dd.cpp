#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t; cin>>t;
    double d;
    while(t--)
    {
        int n; cin>>n;
        if(n%2==0) 
        {
            double m = double(n);
            d=(m*m)/48;
        }
        else if(n%2==1)
        {
            double m = double(n);
            d=((m+3)*(m+3))/48;
        }
        cout<<round(d)<<endl;
    }

    return 0;
}