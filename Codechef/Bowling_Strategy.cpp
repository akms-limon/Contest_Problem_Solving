#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define nl "\n"
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int main()
{
    int t; cin>>t; 
    while(t--){
        int over, bowler, limit; cin>>over>>bowler>>limit;
        ll maxover = bowler*limit;
        if(maxover<over || (bowler==1 && over>1))
        {
            cout<<-1<<nl;
        }
        else
        {
            int over_cnt = 0;
            for(int i = 1; i<=over; i++)
            {
                cout<<i<<" ";
                over_cnt++;
                if(i==bowler)
                {
                    i = 0;
                }
                if(over_cnt==over)
                {
                    break;
                }
            }      
        }
        cout<<nl;
    }
    return 0;
}