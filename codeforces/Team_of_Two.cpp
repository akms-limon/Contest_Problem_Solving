#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"

int main()
{
    ios_base::sync_with_stdio(NULL);cin.tie(NULL);

    int t; cin>>t; 
    while(t--)
    {
        int n, a, b; cin>>n;
        int ara[n][5]={0};
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            while(a--)
            {
                cin>>b;
                ara[i][b-1]=1;
            }
        }
        int i, j, k, cnt=0;
        for ( i = 0; i < n-1; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                cnt = 0;
                for ( k = 0; k < 5; k++)
                {
                    if(ara[i][k]==1 || ara[j][k]==1) cnt++;
                } 
                if(cnt==5) goto here;
            }
        }
        cerr<<cnt<<endl;
        here:
        if(cnt == 5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}