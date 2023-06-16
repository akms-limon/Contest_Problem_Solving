#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
    int n; cin>>n;
    string str; cin>>str;
	unordered_set<char>s;
    for (int i = 0; i < str.size(); i++)
    {
        s.insert(str[i]);
    }
    int cnt=s.size();
    int a=cnt*2+(n-cnt);
    cout<<a<<endl;
    }
    return 0;
}