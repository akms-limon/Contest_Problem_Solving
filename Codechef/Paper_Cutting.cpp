/**
 *    author: A K M S Limon
 *    created: 12-October-2022  22:43:21
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
        int p=n/k;
        cout<<p*p<<endl;
    }
    return 0;
}