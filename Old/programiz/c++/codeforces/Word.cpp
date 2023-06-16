#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    int count=0, count1=0;
    int n= strlen(s);

    for (int i = 0; i < n; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        count++;
        else if(s[i]>='a' && s[i]<='z')
        count1++;
    }
    cout<<"count="<<count;
    cout<<"count1="<<count1;
    if(count>count1)
    {
        for (int i = 0; i < n; i++)
        {
            if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-'a'+'A';
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]-'A'+'a';
        }
    }
    cout<<s<<endl;
    return 0;
    
}