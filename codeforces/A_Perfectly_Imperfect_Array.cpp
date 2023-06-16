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
        int p=0;
       for (int i = 0; i < n; i++)
       {
            int b=sqrt(arr[i]);
            if((b*b)!=arr[i]){
                p=1; break;
            }
       }
       if(p) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       
    }
    return 0;
}