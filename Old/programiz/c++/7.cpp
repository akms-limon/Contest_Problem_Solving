#include<iostream>
using namespace std;

int main()
{
    //Type casting
    int num;
    double numd=10.5;
    
    num = (int)numd; //c-type type conversion
    cout<<num<<endl;
    double num1;
    num1 = int(numd); // function type conversion
    cout<<num1<<endl;
    return 0;

}