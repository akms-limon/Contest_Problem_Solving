#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ara[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ara[i];
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(ara[i]!=8)
            count++;
            else if(ara[i]==8)
            break;
        }
        if(count<=(n-11))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}