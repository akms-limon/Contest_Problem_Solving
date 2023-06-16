/**
 *    author: A K M S Limon
 *    created: 19-March-2023  01:12:45
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        string s; cin>>s;
        long long i, n = s.size();
        for (i = 0; i < n; i++) {
            if(s[i]=='r') cout<<i+1<<'\n';
        }
        for (i = n-1; i>=0; i--) {
            if(s[i]=='l') cout<<i+1<<'\n';
        }
    return 0;
}