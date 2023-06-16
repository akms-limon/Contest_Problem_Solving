#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ara[i];
    }
    int a; cin>>a;
    for (int i = 0; i < n; i++)
    {
        if(ara[i]==a)
        cout<<i<<endl;
    }
    return 0;
}