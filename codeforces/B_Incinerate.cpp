#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        int n, k, a, mx = 0;
        cin >> n >> k;
        vector<int> v, v1;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
            mx = max(a, mx);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v1.push_back(a);
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        for (int i = 0; i < n; i++)
        {
            q.push({v1[i], v[i]});
        }
        int ans = k; 
        while(mx-ans>0 && k>0 && !q.empty()){
            if(q.top().second>ans){
                k-=q.top().first;
                ans+=k;
            }
            else{
                q.pop();
            }
        }
        if(ans>=mx) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}