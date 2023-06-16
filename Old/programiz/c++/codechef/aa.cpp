#include<iostream>
using namespace std;


int main()
{
        int t;cin>>t;
 while(t--) 
 {
        long long n, r; 
        cin>>n>>r;
        int count = 0;
        bool bin = 0;
        for(int i = n; i<=r; i++)
        {
         int a = i, b = i+1, c = i+2, d = i+3;
         if(((a^b)^(c^d))==0 && d<=r)
         {
          bin = 1;
          cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
          break;
         } 
         else
         {
          count++;
         }
         if(count>10)break;
        }
        if(bin==0)cout<<-1<<endl;
 }
  return 0;
}