#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a=4;
        if(n==1) cout<<1;
        else if(n==2) cout<<1<<" "<<2;
        else if(n>2){  
            cout<<1<<' '<<2<<' ';
            for (int i = 0; i < n-2; i++)
            {
                cout<<a<<" ";
                a+=3;
            }
        }
        nll;
        
    }

    return 0;
}