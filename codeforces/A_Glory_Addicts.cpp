#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--) {
       ll n; cin>>n;
       ll a[n], b[n];
       for(int i=0; i<n; i++) cin>>a[i];
       for(int i=0; i<n; i++) cin>>b[i];

        vector<ll>v; vector<ll>v1;
       for (int i = 0; i < n; i++)
       {
            if(a[i]==0) v.push_back(b[i]);
            else v1.push_back(b[i]);
       }
        sort(v.begin(), v.end());
        sort(v1.begin(), v1.end());

        ll l1, l2, sum=0;
        l1=v.size(); l2=v1.size();
        if(l1==0 || l2==0) {
            for (int i = 0; i < n; i++)
            {
                sum+=b[i];
            }
        }
        else if(l1==l2){
            for (int i = 0; i < l1; i++)
            {
                sum+=v[i]*2;
            }
            for (int i = 0; i < l2; i++)
            {
                sum+=v1[i]*2;
            }
            sum-=min(v[0], v1[0]);
        }
        else{
            if(l1>l2){
                for (int i = 0; i < l2; i++)
                {
                    sum+=v1[i]*2;
                }
                for (int i = l1-1; i >= l1-l2 ; i--)
                {
                    sum+=v[i]*2;
                }
                for (int i = 0; i < l1-l2; i++)
                {
                    sum+=v[i];
                }
            }
            else if(l2>l1){
                for (int i = 0; i < l1; i++)
                {
                    sum+=v[i]*2;
                }
                for (int i = l2-1; i >= l2-l1 ; i--)
                {
                    sum+=(v1[i]*2);
                }
                for (int i = 0; i < l2-l1; i++)
                {
                    sum+=v1[i]; 
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}