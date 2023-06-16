#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s1, s2, s; 
        cin>>s1>>s2;
        s=s1+s2;
        unordered_set<char>s5;
        for (int i = 0; i < s.size(); i++)
        {
            s5.insert(s[i]);
        }
        cout<<s5.size()-1<<endl;
    }
    return 0;
}