#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str="123.132356";
    int num;
    float num1;
    double num2;

    num = stoi(str);
    num1 = stof(str);
    num2 = stod(str);

    cout<<num<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;

    return 0;
}