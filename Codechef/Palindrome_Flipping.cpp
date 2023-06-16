/**
 *    author: A K M S Limon
 *    created: 12-October-2022  22:11:14
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
        string s; cin>>s;
        int cnt0=0, cnt1=0;
        for (int i = 0; i < n; i++){
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }
        if(n%2){
            cout<<"YES"<<endl;
        }
        else{
            if(cnt0%2 && cnt1%2) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}