/**
 *    author: A K M S Limon
 *    created: 13-October-2022  20:37:28
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
        int a, b, c;
        cin>>a>>b>>c;
        int x=0;
        if(a+b==c || b+c==a || a+c==b) x=1;
        if(x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}