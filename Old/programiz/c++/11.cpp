#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int b=4;

    bool result;

    result = (a==b);
    cout<<result<<endl;

    result = (a>b);
    cout<<result<<endl;

    result = (a<b);
    cout<<result<<endl;

    //result = (a!=b);
    cout<<(a!=b)<<endl;

    return 0;
}