#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ara[n];
        int count=0;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>ara[i];
            if(ara[i]==1)
            count=1;
            total +=ara[i];
        }
        if(total%2==1 || count == 1)
            cout<<"chef"<<endl;
        else
            cout<<"Chefina"<<endl;
    }
    return 0;
}