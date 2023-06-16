/**
 *    author: A K M S Limon
 *    created: 10-October-2022  00:25:23
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
        ll l, r; cin>>l>>r;
        ll a=sqrtl(l), b=sqrtl(r);
        ll ans = max(0ll, b-a-1)*3;
        if(a*a>=l && a*a<=r) ans++;
        if((a+1)*a>=l && (a+1)*a<=r) ans++;
        if((a+2)*a>=l && (a+2)*a<=r) ans++;
        if(a!=b){
        if(b*b>=l && b*b<=r) ans++;
        if((b+1)*b>=l && (b+1)*b<=r) ans++;
        if((b+2)*b>=l && (b+2)*b<=r) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}