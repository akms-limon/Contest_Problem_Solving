/**
 *    author: A K M S Limon
 *    created: 12-October-2022  22:16:31
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
        int n; cin>>n;  int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        sort(arr, arr+n);
        int mx=1; int cnt=1;
        for (int i = 0; i < n-1; i++){
            if(arr[i]==arr[i+1]) {
                cnt++;
                mx=max(cnt, mx);
            }
            else{
                mx=max(cnt, mx);
                cnt=1;
            }
        }
        cout<<n-mx<<endl;
    }
    return 0;
}