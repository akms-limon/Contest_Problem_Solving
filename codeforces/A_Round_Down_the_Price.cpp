#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        long long int n; cin>>n;
        for (int i = 0; i < 10; i++)
        {
            if(pow(10, i)==n)
            {
                cout<<"0"<<endl;
                break;
            }
            else if(pow(10, i)>n)
            {
                cout<<(int)(n-pow(10, i-1))<<endl;
                break;
            }
        }  
    }
    return 0;
}