#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll a;
    while (cin>>a){
        if(a==0)
        {
            return 0;
        }
        if (a%17 == 0){
            cout<<"1"<<endl;
        }
        else cout<<"0"<<endl;
    }
    return 0;
}