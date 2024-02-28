#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc int t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;



int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n; cin>>n;
        vector<pair<int,int>>primeFactors;
        for (int i = 2; i*i <= n; i++){
            if(n%i==0){
                int cnt = 0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            primeFactors.push_back(make_pair(i,cnt));
            }
        }
        if(n>1) primeFactors.push_back(make_pair(n, 1));
        int ans = 1;
        for(auto it : primeFactors){
            int x = it.second;
            ans = max(x, ans);
        }
        cout << ans << '\n';
    }
    return 0;
}