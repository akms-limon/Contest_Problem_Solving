#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t; 
    for(int i=1; i<=t; i++){
        int a,b,c,k;

        cin >> a >> b >> c >> k;


        if(a%k == 0 && b%k == 0 && c%k == 0)
          printf("Case %d: Peaceful\n",i);
        else
          printf("Case %d: Fight\n",i);
          
    }
    return 0;
}