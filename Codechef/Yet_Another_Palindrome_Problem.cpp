/**
 *    author: A K M S Limon
 *    created: 12-October-2022  21:28:56
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
        int arr[n]; for(int i=0; i<n; i++ ) cin>>arr[i];
        int flag = 1;
        int ar[n];
        for (int i = 0; i < n/2; i++){
            ar[i]=arr[n-i-1]-arr[i];
        }
        for (int i = 0; i < n/2-1; i++){
            if(ar[i]<ar[i+1] || ar[i]<0 || ar[i+1]<0) flag = 0;
        }
        if(flag) cout<<ar[0]<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}