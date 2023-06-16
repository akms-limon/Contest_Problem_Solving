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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int mn = INT_MAX;
        sort(arr, arr+n);
        for (int i = 0; i < n-2; i++)
        {
            mn=min(mn, abs(arr[i]-arr[i+2]));
        }
        cout<<mn<<endl;
        
    }

    return 0;
}