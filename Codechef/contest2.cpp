#include<bits/stdc++.h>
#define ll long long
#define yy cout<<"YES"<<endl
#define nn cout<<"NO"<<endl
#define nl "\n"
#define fl(i,a,n) for(int i=a; i<n; i++)
#define sp(n) fixed << setprecision(n)
using namespace std;

int main()
{
    int t;  cin>>t;
    for(int i=1; i<=t; i++)
    {
        int x1,y1,x2,y2,x3,y3; cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int x4,y4;
        x4=x3-(x2-x1);
        y4=y3-(y2-y1);
        int area; 
        area = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
        int a;
        if(area<0) a=-area;
        else a=area;
        cout<<"Case "<<i<<": "<<x4<<" "<<y4<<" "<<a<<endl;
    }
    
    return 0;
}