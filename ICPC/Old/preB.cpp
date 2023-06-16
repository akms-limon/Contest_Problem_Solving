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
    for(int i=1; i<=t; i++)
    {
        int a, b, c, k;
        cin>>a>>b>>c>>k;
        int sum=a+b+c;
        if(sum%3!=0)
        {
            cout<<"Case "<<i<<": "<<"Fight"<<endl;
        }
        else 
        {
            int x=sum/3;
            int aa=abs(x-a);
            int bb=abs(x-b);
            int cc=abs(x-c);
            if(aa%k==0 && bb%k==0 && cc%k==0)
            {
                cout<<"Case "<<i<<": "<<"Peaceful"<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": "<<"Fight"<<endl;
            }
        }
    }
    return 0;
}