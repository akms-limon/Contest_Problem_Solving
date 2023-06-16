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
        ll n; cin>>n;
        ll ar[n], arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        vector<ll>v;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]-ar[i]);
        }

        sort(v.rbegin(), v.rend());
        ll cnt=0,  i=0, j=n-1;
        while(i<j)
        {
            if(v[i]+v[j]>=0){
                cnt++;
                i++; j--;
            }
            else{
                j--;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}