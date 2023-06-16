/**
 *    author: A K M S Limon
 *    created: 10-October-2022  15:15:10
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
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr, arr+n);
        cout<<arr[n-1]+arr[n-2]-arr[0]-arr[1]<<endl;
    }
    return 0;
}