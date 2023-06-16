#include<iostream>
using namespace std;
int main()
{
    int a,gcd,rem,lcd;
    int c=a*gcd;
    cout<<"Please enter two number. first number must be greater than last number :"; 
    cin>>a>>gcd;  
    while(1) {
        rem=a%gcd; a=gcd;
        if(rem==0) break;
        gcd=rem; }   
    cout<<"GCD : "<<gcd<<endl;
    lcd=(c)/gcd; cout<<"LCD : "<<lcd<<endl;
    return 0;
}