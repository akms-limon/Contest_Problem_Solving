#include <bits/stdc++.h>
using namespace std;
#define nl "\n";
#define nll cout<<"\n";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s, ss;
        cin>>s>>ss;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B') s[i]='G';
            if(ss[i]=='B') ss[i]='G';
        }
        if(s==ss) cout<<"YES"<<nl
        else cout<<"NO"<<nl
    }

    return 0;
}