#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n; cin>>n;
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ara[i];
    }
    bool a=false;
    for (int i = 0; i < n; i++)
    {
        if(ara[i]==1)
        {
            a=true;
            break;
        }
    }
    if(a) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

    return 0;
}