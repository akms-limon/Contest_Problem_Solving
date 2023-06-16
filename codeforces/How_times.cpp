#include<iostream>

using namespace std;
int main()
{
    string s,s1; cin>>s;
    int cnt=0;
    int n=s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; i++)
        {
            if (s[i]!=s[j])
            {
                cnt++;
            } 
        } 
    }
    return 0;
}