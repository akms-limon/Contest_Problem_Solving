/**
 *    author: A K M S Limon
 *    created: 12-October-2022  22:48:04
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
        int n, k; cin>>n>>k; 
        if(n%2==0){
        if(k>=n/2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
        else {
            if(k>n/2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}