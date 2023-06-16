#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, count=0; 
    cin>>a>>b;
    int n=sqrt(b);
    for (int i = 2; i <= n; i++){
        if(b%i==0){
            count = 1; break;
        }
    }
    if(count==1) 
    cout<<"NO"<<endl;
    else if(count==0)
    cout<<"YES"<<endl;
    return 0;
}