#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, a, b, c, d;
        cin>>n>>a>>b>>c>>d;
        int x=(a-b)*n;
        int y=(a+b)*n;
        int p=c-d; 
        int q=c+d;
        int count=0;
        for ( int i=y; i>=x; i--)
        {
            if ((i>=p && i<=q))
            {
                count=1;
                break;
            }
        }
        if(count)
        {
            cout<<"Yes"<<'\n';
        }
        else
        {
            cout<<"No"<<'\n';
        }
    }
    return 0;
}