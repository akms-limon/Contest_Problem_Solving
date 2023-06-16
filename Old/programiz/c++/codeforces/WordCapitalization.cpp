#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[1001];
    cin>>s;
    if(s[0]>='a' && s[0]<='z')
    s[0]=s[0]-'a'+'A';
    cout<<s<<endl;
    return 0;
}