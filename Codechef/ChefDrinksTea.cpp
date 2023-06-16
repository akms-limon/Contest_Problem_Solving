#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x, y, z, a; cin>>x>>y>>z;
        if(y>=x) cout<<z<<endl;
        else{
            a=x/y;
            if (a*y==x) cout<<a*z<<endl;
            else cout<<(a+1)*z<<endl;
        }
    }
    return 0;
}