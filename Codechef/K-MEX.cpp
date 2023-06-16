#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
       int n, m, k; cin>>n>>m>>k;
       int ara[n], ara1[m];
       for (int i = 0; i < n; i++)
       {
        cin>>ara[i];
       }
       for (int i = 0; i < m; i++)
       {
        ara1[i]=ara[i];
       }
       sort(ara1, ara1+m);
       int a;
       if(m==1)
       {
            a=ara1[0];
       }
       else{
       for (int i = 0; i < m-1; i++)
       {
        if(ara1[i] == ara1[i+1]) continue;
        else if(ara1[i]+1 != ara1[i+1]) { a=ara1[i]+1; break; } 
        else a=ara1[m-1]+1;
       }
       }
       cout<<a<<endl<<k<<endl;
       if(a==k) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}