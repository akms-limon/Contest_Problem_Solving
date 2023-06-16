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
        ll n, k; cin>>n>>k;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll mx, sum=0;
        for (int i = 0; i < k; i++)
        {
            mx=arr[i];
            for (int j = i; j< n; j=j+k)
            {
                if(mx<arr[j])
                {
                    mx=max(arr[j], mx);
                }
            }
            sum+=mx;
        }
        cout<<sum<<endl; 
    }
    return 0;
}