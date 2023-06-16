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
    int t; cin>>t;
    while (t--)
    {
        string s1, s2; 
        getline(cin, s1);
        getline(cin, s2);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        remove(s1.begin(), s1.end(),' ');
        remove(s2.begin(), s2.end(),' ');
        int res=s1.compare(s2);
        if(res==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}