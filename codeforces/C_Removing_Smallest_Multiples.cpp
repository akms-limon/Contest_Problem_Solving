#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        string s; cin>>s;
        s = '@'+s;
        long long i, j, k=0, sum=0;
        for (i = 1; i <= n; i++){
            for ( j = i; j <= n && s[j]!='1'; j+=i){
                if(s[j]=='0') {
                    sum+=i;
                    s[j]='?';
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}