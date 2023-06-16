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
        int n, x;
        cin>>n>>x;
        if(n<=x) cout<<'0'<<endl;
        else cout<<n-x<<endl;
    }

    return 0;
}