/**
 *    author: A K M S Limon
 *    created: 10-October-2022  21:32:19
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
        int arr[n]; int c=1;
        for(int i = 0; i < n; i++) cin>>arr[i];
        for (int i = 0; i < n-2; i++)
        {
            if(__gcd(arr[i], arr[i+2]) >= __gcd(arr[i+1], arr[i+1]))  continue;
            else{
                cout<<"NO"<<nl;
                c=0;
                break;
            }
        }
        if(c)
        cout<<"YES"<<endl;
    }
    return 0;
}