#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin>>t; 
    while(t--)
    {
        string a, b;
        cin>>a>>b;
        // cin>>n;
        // int p=n[0]+n[1];
        // cout<<n[0]+n[1]-(2*48)<<endl;
        int n=a.size();
        int m=b.size();
        int mx=max(n,m);
        int mn=min(n,m);
        vector<ll>v;
        int y=0;
        if(n>=m)
        {
            for(int i=mn-1, j=mx-1; i>=0, j>=(mx-mn); i--, j--)
            {
                int x=a[j]+b[i]+y-(2*48);
                if(x>10) {
                    v.push_back(x%10);
                    y=x/10;
                }
                else{
                    v.push_back(x);
                    y=0;
                }
            }
        }
        else{

            for(int i=mn-1, j=mx-1; i>=0, j>=(mx-mn); i--, j--)
            {
                int x=b[j]+a[i]+y-(2*48);
                if(x>10) {
                    v.push_back(x%10);
                    y=x/10;
                }
                else{
                    v.push_back(x);
                    y=0;
                }
            }
        }
        if(y==0 && n>=m)
        {
            for (int i = mn-1; i >=0; i++)
            {
                int g=a[i]-48;
                v.push_back(g);
            }
            
        }
        else if(y==0 && m>n)
        {
            for (int i = mn-1; i >=0; i++)
            {
                int g=b[i]-48;
                v.push_back(g);
            }
            
        }
        if(y!=0 && n>=m)
        {
            for (int i = mn-1; i >=0; i++)
            {
                int z=y+a[i]-48;
                if(z>9)
                {
                    v.push_back(z%10);
                    y=z/10;
                }
                else
                {
                    int g=a[i]-48;
                    v.push_back(g);
                    y=0;
                }
            }
            
        }
        else if(y!=0 && m>n)
        {
            for (int i = mn-1; i >=0; i++)
            {
                int z=y+a[i];
                if(z>9)
                {
                    v.push_back(z%10);
                    y=z/10;
                }
                else
                {
                    int g=a[i]-48;
                    v.push_back(g);
                    y=0;
                }
            }
            
        }
        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i];
        }
        nll; 
    }

    return 0;
}