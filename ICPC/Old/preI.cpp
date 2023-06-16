#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double l, w;
    while(cin>>l>>w && l!=0 && w!=0)
    {
        double x=l/1.6;
        double distance = 2*x+w-sqrt((x*x)-((l-x)*(l-x)));
        cout<<fixed<<setprecision(4)<<distance<<endl;
    }
    return 0;
}