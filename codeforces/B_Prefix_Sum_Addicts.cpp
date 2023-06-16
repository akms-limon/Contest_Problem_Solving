#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--) {
       int n, k; cin>>n>>k;
       int arr[k];
       for (int i = 0; i < k; i++)
       {
        cin>>arr[i];
       }
       int temp[k-1];
       for(int i=k-1, j=0; i>0; i--, j++){
        temp[j]=arr[i]-arr[i-1];
       }
       int b=1;
       reverse(temp, temp+(k-1));
        for (int i = 0; i < k-2; i++)
        {
            if(temp[i]>temp[i+1]){
                b=0; 
                break;
            }
        }
        ll a=temp[0]; ll c=arr[0];
        if(c-(a*(n-k))>a) b=0;

        if(n==1 or k==1) cout<<"Yes"<<endl;
        else {
            if(b) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}