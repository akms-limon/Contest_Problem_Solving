/**
 *    author: A K M S Limon
 *    created: 11-October-2022  22:27:55
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
        int n; cin>>n; int arr[n];
        for (int i = 0; i < n; i++) cin>>arr[i];        
        int ar[n]; int sum=0;
        for (int i = 0; i < n; i++){
            sum+=arr[i];
            ar[i]=sum;
        }
        
    }
    return 0;
}