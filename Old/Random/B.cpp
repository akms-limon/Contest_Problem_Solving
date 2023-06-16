#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int s; cin>>s;
    int n; cin>>n;
    int ara[s]={0};
    int arr[n]; 
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        ara[arr[i]-1]=1;
    }
    int cnt = 0;
    for (int i = 0; i < s; i++)
    {
        if(ara[i]==1) continue;
        else{
            if((i==0) && ara[0]==0 && ara[s-1]==0 && ara[1]==0)
            {
                cnt++;
                ara[i]=1; continue;
            }
            else if((i==s-1) && ara[s-1]==0 && ara[0]==0 && ara[s-2]==0)
            {
                cnt++; ara[i]=1; continue;
            }
            else
            {
                if(ara[i]==0 && ara[i+1]==0 && ara[i-1]==0)
                {
                    cnt++; ara[i]=1;  continue;
                }
            }
        }
    }
    
    cout<<cnt<<endl;
    return 0;
}