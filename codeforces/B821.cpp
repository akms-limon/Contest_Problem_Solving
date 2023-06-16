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
        ll n, x, y;
        cin>>n>>x>>y;
        if(x==0 && y==0) cout<<"-1"<<endl;
        else if(x>0 && y>0) cout<<"-1"<<endl;
        else if((n-1)%(x+y)!=0) cout<<"-1"<<endl;
        else {
            int times = (n-1) / (x+y);
            int ply = 2;
            for(int i=0; i<times; i++){

                for(int j= 1; j<=(x+y); j++){
                    cout<<ply<<" ";
                }
                ply += (x+y);

            }
            cout<<endl;
        }
    }

    return 0;
}