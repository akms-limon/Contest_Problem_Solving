#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t;
    while(t--) {
       int c, g; 
       cin>>g>>c;
       cout<<(c*c)/(2*g)<<endl;
    }
    return 0;
}