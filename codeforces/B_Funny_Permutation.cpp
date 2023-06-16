/**
 *    author: A K M S Limon
 *    created: 11-October-2022  23:55:30
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
        if(n==3) cout<<-1<<endl;
        else {
            for (int i = 3; i <= n; i++){
                cout<<i<<' ';
            }
            cout<<2<<' '<<1<<endl;
        }
        nll;
    }
    return 0;
}