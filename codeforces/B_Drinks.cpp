#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin>>t; 
    while(t--)
    {
        int p, a; cin>>p; int b, c, d; 
        cin>>a; 
        string s="abcdefghijklmnopqrstuvwxyz";
        string s1;
        for(int i=0; i<p; i++)
        {    
            if(a%10==0 && a!=0)
            {
                a=a/10;
                b=a%10; a=a/10;
                c=a%10; a=a/10;
                d=c*10+b;
                s1[i]==s[d-1];
            }
            else if(a%10!=0 && a!=0)
            {
                s1[i]=s[a%10-1];
            }
        }
        cout<<s1<<endl;    
    }

    return 0;
}