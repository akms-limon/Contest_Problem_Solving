/**
 *    author: A K M S Limon
 *    created: 02-April-2023  20:16:37
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
        int n, m; cin>>n;
        set<int>s;
        for (int i = 0; i < n; i++) {
            int a; cin>>a;
            s.insert(a);
        }
        cin>>m;
        for (int i = 0; i < m; i++) {
            int a;  cin>>a;
            s.insert(a);
        }
        if(s.size()==t) cout<<"I become the guy."<<'\n';
        else cout<<"Oh, my keyboard!"<<'\n';
      
    return 0;
}