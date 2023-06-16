/**
 *    author: A K M S Limon
 *    created: 13-October-2022  20:40:28
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int b=1;
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i]==arr[i+1]) b=0;
        }
        if(b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}