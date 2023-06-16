#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; 
    cin>>t; 
    while (t--)
    {
        int n; cin>>n;
        for (int line = 1; line<=n; line++)
        {
            for (int col = 1; col <=line; col++)
            {
                if(col==1 ||  col == line) cout<<1<<" ";
                else cout<<0<<" ";
            } nll;
        }
        nll;
    }
    return 0;
}