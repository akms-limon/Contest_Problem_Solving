/**
 *    author: A K M S Limon
 *    created: 10-October-2022  20:45:54
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
        int arr[n], ar[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0; i<n; i++) cin>>ar[i];
        int c=0, cnt=0, cnt1=0;
        for (int i = 0; i < n; i++){
            if(arr[i]!=ar[i]){
                c=1; cnt++;
            } 
        }
        sort(arr, arr+n);
        sort(ar, ar+n);
        for (int i = 0; i < n; i++){
            if(arr[i]!=ar[i]){
                cnt1++;
            }
        }
        if(cnt1<cnt) cout<<cnt1+1<<endl;
        else if(cnt1==cnt) cout<<cnt<<endl;
    }
    return 0;
}