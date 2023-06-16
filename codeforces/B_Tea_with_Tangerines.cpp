#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int tc; cin>>tc;
    while(tc--) {
        int n; cin>>n;
        int v[n];
        for (int i = 0; i < n; i++) cin>>v[i];
        sort(v, v+n);
        int p = v[0]*2-1; ll ans=0;
        for (int i = 1; i < n; i++){
            if(v[i]>p) ans+=v[i]/p;
            if(v[i]%p==0 && ans > 0) ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}