#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin>>n; 
    int arr[n];
    int cnt[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    cnt[n-1]=1;
    for(int i=n-2; i >=0; i--) {
        if(arr[i+1]-arr[i]>=2) {
            cnt[i]=cnt[i+1]+1;
        }
        else{
            cnt[i]=1;
        }
    }
    for(int i =0; i < n; i++){
        if(cnt[i]==1) cout<<'0'<<endl;
        else cout<<cnt[i]<<endl;
    }
    return 0;
}