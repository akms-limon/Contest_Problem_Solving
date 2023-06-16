/**
 *    author: A K M S Limon
 *    created: 17-March-2023  00:38:24
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m, sum=0; cin>>n>>m;
    map<int,int>mp;
    for (int i = 0; i < m; i++) {
        int a; cin>>a;
        mp[a]++;
        sum+=a;
    }
    vector<int>v;
    for (auto it:mp) {
        v.push_back(it.second);
    }
    int ans=0;
    int hi = 100, lo = 0, mid;
    while(lo<hi){
        mid = (lo+hi+1)/2;
        ans=0;
        for (int i = 0; i < v.size(); i++) {
            ans+=v[i]/mid;
        }
        if(ans>=n){
            lo = mid;
        }
        else{
            hi = mid-1;
        }
    }
    cout<<lo<<endl;
    return 0;
}