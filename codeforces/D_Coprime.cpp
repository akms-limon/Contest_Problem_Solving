/**
 *    author: A K M S Limon
 *    created: 14-October-2022  01:56:20
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector <int> v(1001,-1);
        for (int i = 0; i < n; i++)
        {
            v[a[i]]=i;
        }
        int mx=INT_MIN;
        for (int i = 0; i < 1001; i++)
        {
            if(v[i]!=-1){
                for (int j = 0; j < 1001; j++)
                {
                    if(v[j]!=-1){
                        if(__gcd(i, j)==1) mx=max(mx, v[i]+v[j]);
                    }
                }
                
            }
        }
        if(mx==INT_MIN) cout<<-1<<endl;
        else cout<<mx+2<<endl;
        
    }
    return 0;
}