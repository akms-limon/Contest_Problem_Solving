/**
 *    author: A K M S Limon
 *    created: 12-March-2023  22:12:18
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int t; cin>>t; 
        while(t--){
            long long n,x,p, b =0;
            cin>>n>>x>>p;
            long long r = min(2*n+x+2,p);
            for(long long i=0;i<r;i++) {
                if((x+(i+1)*(i+2)/2)%n==0){
                    b=1;
                }
            }
            if(b) cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
        }
    return 0;
}