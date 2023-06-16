/**
 *    author: A K M S Limon
 *    created: 10-October-2022  01:37:49
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
        if(n==0) cout<<'0'<<nl;
        else if(n==1) cout<<'2'<<nl;
        else if(n==2) cout<<'1'<<nl;
        else if(n%3==0) cout<<n/3<<nl;
        else cout<<n/3+1<<nl;
    }
    return 0;
}