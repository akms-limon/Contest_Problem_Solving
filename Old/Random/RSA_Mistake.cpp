#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

void primefactor(vector<ll>&v, ll n)
{
    while(n%2==0)
    {
        v.push_back(2);
        n/=2;
    }
    for (int i = 3; i <=sqrt(n); i+=2)
    {
        /* code */
        while(n%i==0)
        {
            v.push_back(i);
            n/=i;
        }
    }
    if(n>2) v.push_back(n);
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    ll a, b; cin>>a>>b;
    vector<ll>v;

    primefactor(v, a);
    primefactor(v, b);

    map<ll, ll>mp;
    for(auto ele: v)
    {
        mp[ele]++;
    }
    if(v.size()==2)
    {
        if(a!=b) cout<<"full credit"<<endl;
        else cout<<"no credit"<<endl;
    }
    else{
        if(all_of(mp.begin(), mp.end(), [](pair<ll,ll>a) {return a.second ==1; }))
        {
            cout<<"partial credit"<<endl;
        }
        else
        {
            cout<<"no credit"<<endl;
        }
    }

    return 0;
}