/**
 *    author: A K M S Limon
 *    created: 13-October-2022  20:53:16
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
        string s[8]; int c=0;
        string s1="RRRRRRRR";
        for (int i = 0; i < 8; i++) cin>>s[i];
        for (int i = 0; i < 8; i++) if(s[i]==s1) c=1;
        if(c) cout<<'R'<<endl;
        else cout<<'B'<<endl;
    }
    return 0;
}