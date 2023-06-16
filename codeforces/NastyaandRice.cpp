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
        if((x>=p && x<=q) || (x>=p && x<=q))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    
    return 0;
}