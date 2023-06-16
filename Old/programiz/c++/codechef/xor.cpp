#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x%2==0){
            if(y>=x+3) cout<<x<<" "<<x+1<<" "<<x+2<<" "<<x+3<<endl;
            else cout<<"-1"<<endl;
        }
        else{
            if(y>=x+4){
                x=x+1; cout<<x<<" "<<x+1<<" "<<x+2<<" "<<x+3<<endl;
            }
            else cout<<"-1"<<endl;
        }
    }
    return 0;
}