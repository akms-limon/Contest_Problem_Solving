#include<iostream>
#include<string>

using namespace std;

int main()
{
    //string to integer
    string s="100";
    
    int num;

    num = stoi(s);
    cout<<num<<endl;


    //integer to string
    
    int num1=10;
    string str;

    str = to_string(num1);

    cout<<s;
    return 0;
}