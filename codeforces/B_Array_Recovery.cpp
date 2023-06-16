#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--) {
       
       ll n; cin>>n; ll arr[n];
       for (int i = 0; i < n; i++)
       {
        cin>>arr[i];
       }
        ll a[n];
        a[0]=arr[0];
        int p=0;
        for (int i = 1; i < n; i++)
        {
            a[i]=arr[i]+a[i-1];
            if(a[i-1]-arr[i]>=0 && arr[i]>=1){
                p=1;
            }
        }
        if(p) cout<<-1<<endl;
        else{
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        nll;
        }
    }
    return 0;
}