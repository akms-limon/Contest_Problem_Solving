#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s; cin>>s;
    int n=s.size();
    int cn=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='(') cn++;
        else if(s[i]==')') cn--;
        if(cn<0){
            cn=-1; break;
        }
    }
    if(cn==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    

    return 0;
}