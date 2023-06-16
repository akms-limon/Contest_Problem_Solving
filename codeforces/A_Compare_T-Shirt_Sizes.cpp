/**
 *    author: A K M S Limon
 *    created: 11-October-2022  21:47:45
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
        string s, ss;
        cin>>s>>ss;
        int n=s.size(), nn=ss.size();
        if(s[n-1]==ss[nn-1]) {
            if(n==nn) cout<<'='<<endl;
            else if(n>nn && s[n-1]=='S') cout<<'<'<<endl;
            else if(n<nn && s[n-1]=='S') cout<<'>'<<endl;
            else if(n>nn && s[n-1]=='L') cout<<'>'<<endl;
            else if(n<nn && s[n-1] == 'L') cout<<'<'<<endl;
        }
        else if(s[n-1]=='L' && ss[nn-1]=='S'){
            cout<<'>'<<endl;
        }
        else if(s[n-1]=='L' && ss[nn-1]=='M'){
            cout<<'>'<<endl;
        }
        else if(s[n-1]=='M' && ss[nn-1]=='S'){
            cout<<'>'<<endl;
        }
        else cout<<'<'<<endl;
    }
    return 0;
}