/**
 *    author: A K M S Limon
 *    created: 12-October-2022  21:27:57
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
        if(n>100) cout<<n-10<<endl;
        else cout<<n<<endl;
    }
    return 0;
}