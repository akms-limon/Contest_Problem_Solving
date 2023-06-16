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
        int c; cin>>c; 
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        map<int, int>m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        int sum=0;
        for(auto it = m.begin(); it!=m.end(); it++)
        {
            if(it->second>=c) sum+=c;
            else sum+=it->second;
        }
        cout<<sum<<endl;
        
    }

    return 0;
}